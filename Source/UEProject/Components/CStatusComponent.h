#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CStatusComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UEPROJECT_API UCStatusComponent : public UActorComponent
{
	GENERATED_BODY()

protected:    
	UPROPERTY(EditDefaultsOnly)
		float MaxHealth = 100.0f;

	UPROPERTY(EditDefaultsOnly)
		float Attack = 10.0f;

	UPROPERTY(EditDefaultsOnly)
		float Defence = 5.0f;

	UPROPERTY(EditDefaultsOnly)
		float CriticalRate = 0.1f;
	
	UPROPERTY(EditDefaultsOnly)
		float CriticalAttack = 2.0f;

	UPROPERTY(EditDefaultsOnly)
		float Speed = 600.0f;

public:	
	FORCEINLINE float GetMaxHealth() { return MaxHealth; }
	FORCEINLINE float GetCurHealth() { return CurHealth; }	
	FORCEINLINE float GetAttack() { return Attack; }
	FORCEINLINE float GetDefence() { return Defence; }
	FORCEINLINE float GetCriticalRate() { return CriticalRate; }
	FORCEINLINE float GetCriticalAttack() { return CriticalAttack; }
	FORCEINLINE float GetSpeed() { return Speed; }

public:
	UCStatusComponent();

	void Damage(float InAmount);

protected:
	virtual void BeginPlay() override;

private:
	float CurHealth;
};
