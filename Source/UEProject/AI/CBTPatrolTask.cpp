#include "AI/CBTPatrolTask.h"
#include "AI/CMonsterAIController.h"
#include "Character/CMonster.h"
#include "Components/PatrolComponent.h"

UCBTPatrolTask::UCBTPatrolTask()
{
    bNotifyTick = true;

    NodeName = "Patrol";
}

EBTNodeResult::Type UCBTPatrolTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    ACMonsterAIController* controller = Cast<ACMonsterAIController>(OwnerComp.GetOwner());    
    ACMonster* monster = Cast<ACMonster>(controller->GetPawn());
    UPatrolComponent* patrol = monster->GetPatrol();

    FVector location;
    float acceptance;

    if (patrol->GetMoveTo(location, acceptance) == false)
    {
        return EBTNodeResult::Failed;
    }

    return EBTNodeResult::InProgress;
}

void UCBTPatrolTask::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

    ACMonsterAIController* controller = Cast<ACMonsterAIController>(OwnerComp.GetOwner());
    ACMonster* monster = Cast<ACMonster>(controller->GetPawn());
    UPatrolComponent* patrol = monster->GetPatrol();

    FVector location;
    float acceptance;
    
    patrol->GetMoveTo(location, acceptance);
    EPathFollowingRequestResult::Type type = controller->MoveToLocation(location, acceptance, false);

    if (type == EPathFollowingRequestResult::Failed)
    {
        FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
        return;
    }

    if (type == EPathFollowingRequestResult::AlreadyAtGoal)
    {
        FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);

        patrol->UpdateNextIndex();
    }
}
