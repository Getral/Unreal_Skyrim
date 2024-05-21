#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CBehaviorComponent.generated.h"

UENUM(BlueprintType)
enum class EBehaviorType : uint8
{
	Wait,
	Patrol,
	Trace,
	Attack,
	Hit,
	Death
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UEPROJECT_API UCBehaviorComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
		FName BehaviorKey = "Behavior";

	UPROPERTY(EditAnywhere)
		FName PlayerKey = "Player";


public:
	UFUNCTION(BlueprintPure)
		bool IsType(EBehaviorType InType);

	void ChangeType(EBehaviorType InType);

	class ACUnit* GetPlayer();

	void SetBolackboard(class UBlackboardComponent* InBlackboard) { Blackboard = InBlackboard; }
public:		
	UCBehaviorComponent();

protected:	
	virtual void BeginPlay() override;
	
	EBehaviorType GetType();

private:
	class UBlackboardComponent* Blackboard;
};
