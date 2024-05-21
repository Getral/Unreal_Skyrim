#pragma once

#include "CoreMinimal.h"
#include "Character/CUnit.h"
#include "CMonster.generated.h"

UCLASS()
class UEPROJECT_API ACMonster : public ACUnit
{
	GENERATED_BODY()	

protected:
	UPROPERTY(EditDefaultsOnly)
		class UBehaviorTree* BehaviorTree;

    UPROPERTY(VisibleInstanceOnly)
		class UPatrolComponent* Patrol;

public:
	ACMonster();

	FORCEINLINE class UBehaviorTree* GetTree() { return BehaviorTree; }	
	FORCEINLINE class UPatrolComponent* GetPatrol() { return Patrol; }

protected:
	virtual void BeginPlay() override;
};
