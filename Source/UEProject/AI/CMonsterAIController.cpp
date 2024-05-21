#include "AI/CMonsterAIController.h"
#include "Character/CMonster.h"
#include "Character/CNaruto.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Components/CBehaviorComponent.h"
#include "DrawDebugHelpers.h"


ACMonsterAIController::ACMonsterAIController()
{
    PrimaryActorTick.bCanEverTick = true;
    
    Blackboard = CreateDefaultSubobject<UBlackboardComponent>("Blackboard");
    Perception = CreateDefaultSubobject<UAIPerceptionComponent>("Perception");
    Behavior = CreateDefaultSubobject<UCBehaviorComponent>("Behavior");    

    Sight = CreateDefaultSubobject<UAISenseConfig_Sight>("Sight");
    Sight->SightRadius = 600;
    Sight->LoseSightRadius = 800;
    Sight->PeripheralVisionAngleDegrees = 90.0f;
    Sight->SetMaxAge(2);
    Sight->DetectionByAffiliation.bDetectEnemies = true;
    Sight->DetectionByAffiliation.bDetectNeutrals = false;
    Sight->DetectionByAffiliation.bDetectFriendlies = false;

    Perception->ConfigureSense(*Sight);
    Perception->SetDominantSense(*Sight->GetSenseImplementation());
}

void ACMonsterAIController::BeginPlay()
{
    Super::BeginPlay();
}

void ACMonsterAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    //if (!bDrawDebug) return;
    //
    //FVector center = Owner->GetActorLocation();
    //center.Z += AdjustCircleHeight;
    //
    //DrawDebugCircle(GetWorld(), center, Sight->SightRadius, 300,
    //    FColor::Green, false, -1.0f, 0, 0, FVector::RightVector, FVector::ForwardVector);
    //DrawDebugCircle(GetWorld(), center, BehaviorRange, 300,
    //    FColor::Red, false, -1.0f, 0, 0, FVector::RightVector, FVector::ForwardVector);
}

void ACMonsterAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    Owner = Cast<ACMonster>(InPawn);

    SetGenericTeamId(Owner->GetTeamID());

    Perception->OnPerceptionUpdated.AddDynamic(this, &ACMonsterAIController::OnPerceptionUpdated);

    UBlackboardComponent* blackboard = Blackboard.Get();
    UseBlackboard(Owner->GetTree()->BlackboardAsset, blackboard);
    Behavior->SetBolackboard(Blackboard);

    RunBehaviorTree(Owner->GetTree());
}

void ACMonsterAIController::OnUnPossess()
{
    Super::OnUnPossess();
}

float ACMonsterAIController::GetSightRange()
{
    return Sight->SightRadius;
}

void ACMonsterAIController::OnPerceptionUpdated(const TArray<AActor*>& UpdateActors)
{
    TArray<AActor*> actors;
    Perception->GetCurrentlyPerceivedActors(nullptr, actors);

    ACNaruto* player = nullptr;
    for (AActor* actor : actors)
    {
        player = Cast<ACNaruto>(actor);

        if (player != nullptr)
            break;
    }

    Blackboard->SetValueAsObject("Player", player);
}
