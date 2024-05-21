#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CUnit.generated.h"

UENUM(BlueprintType)
enum class EActionState : uint8
{
	Unarmed,
	Sword,
	Rifle,
	Blade
};

UCLASS()
class UEPROJECT_API ACUnit : public ACharacter
{
	GENERATED_BODY()

protected:
    UPROPERTY(EditAnywhere)
		FString UnitName;

	UPROPERTY(EditDefaultsOnly)
		uint8 TeamID = 1;

    UPROPERTY(VisibleAnywhere)
		class UCStatusComponent* Status;

	UPROPERTY(EditAnywhere)
		class UWidgetComponent* NameWidget;

	UPROPERTY(EditAnywhere)
		class UWidgetComponent* HPBarWidget;

	UPROPERTY(EditAnywhere)
		TMap<EActionState, TSubclassOf<class ACWeapon>> WeaponClasses;

	UPROPERTY(EditAnywhere)
		class UAnimMontage* HitMotion;

	UPROPERTY(EditAnywhere)
		class UAnimMontage* DeathMotion;	

	UPROPERTY(EditAnywhere)
		class USoundBase* HitSound;

	UPROPERTY(EditAnywhere)
		class USoundBase* DeathSound;

public:
	ACUnit();

	void EndDrawWeapon();
	void EndSheathWeapon();

	void EndAttack();

	void GrabWeapon();
	void DropWeapon();

	void EquipWeapon(EActionState EquipType);

	void StartInputCombo();
	void EndInputCombo();

	void ActiveCombo();	

	void EndDeath();

	EActionState GetState() { return ActionType; }
	bool IsAirJump() { return bAirJump; }
	class ACWeapon* GetCurWeapon()
	{
		if (Weapons.Contains(ActionType))
			return Weapons[ActionType];

		return nullptr;
	}

	void SetCanMove(bool CanMove) { bCanMove = CanMove; }

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;		

	FORCEINLINE uint8 GetTeamID() { return TeamID; }
private:
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
		class AController* EventInstigator, AActor* DamageCauser) override;

	void CreateWeapons();

	UFUNCTION()
		void Terminate();

	UFUNCTION()
		void SetOriginBodyColor();

protected:
	bool bAirJump = false;
	bool bCanMove = true;	

	EActionState ActionType = EActionState::Unarmed;
	EActionState NextEquipType = EActionState::Unarmed;

	TMap<EActionState, class ACWeapon*> Weapons;

	FLinearColor BodyColor;
	class UMaterialInstanceDynamic* BodyMaterial;
};
