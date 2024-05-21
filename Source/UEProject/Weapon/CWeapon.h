#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "CWeapon.generated.h"

USTRUCT(BlueprintType)
struct FComboData : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		class UAnimMontage* Motion;
	
	UPROPERTY(EditAnywhere)
		float Attack;

	UPROPERTY(EditAnywhere)
		bool bCanMove;

	UPROPERTY(EditAnywhere)
		class UParticleSystem* Effect;

	UPROPERTY(EditAnywhere)
		FVector EffectOffset;
};

UCLASS()
class UEPROJECT_API ACWeapon : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly)
		FName WeaponName;

	UPROPERTY(EditDefaultsOnly)
		class UAnimMontage* DrawMontage;

	UPROPERTY(EditDefaultsOnly)
		class UAnimMontage* SheathMontage;

	UPROPERTY(EditDefaultsOnly)
		class UDataTable* DataTable;

	UPROPERTY(EditDefaultsOnly)
		FName HolsterSocketName;

	UPROPERTY(EditDefaultsOnly)
		FName EquipSocketName;

public:		
	ACWeapon();

	void AttachWeapon(class USceneComponent* Parent);
	virtual void GrabWeapon();
	virtual void DropWeapon();

	virtual void Attack();
	virtual void ActiveCombo();
	virtual void EndAttack();

	void SetActive(bool IsActive);

	TArray<FComboData*> GetComboDatas() { return ComboDatas; }
	bool IsAttacking() { return bAttacking; }

protected:	
	virtual void BeginPlay() override;

protected:
	TArray<FComboData*> ComboDatas;
	class ACUnit* Owner;

	bool bAttacking = false;
};
