#include "AI/CBTAttackTask.h"
#include "AI/CMonsterAIController.h"
#include "Character/CUnit.h"
#include "Weapon/CWeapon.h"
#include "Components/CBehaviorComponent.h"
#include "Kismet/KismetMathLibrary.h"

UCBTAttackTask::UCBTAttackTask()
{
    bNotifyTick = true;

    NodeName = "Attack";
}

EBTNodeResult::Type UCBTAttackTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    ACMonsterAIController* controller = Cast<ACMonsterAIController>(OwnerComp.GetOwner());
    UCBehaviorComponent* behavior = controller->GetBehavior();
    ACUnit* monster = Cast<ACUnit>(controller->GetPawn());
    ACUnit* target = behavior->GetPlayer();
    
    if (target == nullptr)
        return EBTNodeResult::Failed;

    FRotator rot = UKismetMathLibrary::FindLookAtRotation(monster->GetActorLocation(), target->GetActorLocation());
    monster->SetActorRotation(rot.Quaternion());

    monster->GetCurWeapon()->Attack();

    return EBTNodeResult::InProgress;
}

void UCBTAttackTask::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

    ACMonsterAIController* controller = Cast<ACMonsterAIController>(OwnerComp.GetOwner());    
    ACUnit* monster = Cast<ACUnit>(controller->GetPawn());

    if (monster->GetCurWeapon()->IsAttacking() == false)
    {
        FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
    }
}
