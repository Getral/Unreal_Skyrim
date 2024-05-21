// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "CMonsterAIController.generated.h"

/**
 * 
 */
UCLASS()
class UEPROJECT_API ACMonsterAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere)
		bool bDrawDebug = true;

	UPROPERTY(EditAnywhere)
		float AttackRange = 150;

	UPROPERTY(EditAnywhere)
		float AdjustCircleHeight = 50;

	UPROPERTY(VisibleDefaultsOnly)
		class UAIPerceptionComponent* Perception;

	UPROPERTY(VisibleDefaultsOnly)
		class UCBehaviorComponent* Behavior;

public:
	ACMonsterAIController();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

	class UCBehaviorComponent* GetBehavior() { return Behavior; }
	float GetAttackRange() { return AttackRange; }
	float GetSightRange();

private:
	UFUNCTION()
		void OnPerceptionUpdated(const TArray<AActor*>& UpdateActors);

private:
	class ACMonster* Owner;
	class UAISenseConfig_Sight* Sight;
};
