// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/CWeapon.h"
#include "CMelee.generated.h"

/**
 * 
 */
UCLASS()
class UEPROJECT_API ACMelee : public ACWeapon
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual void Attack() override;
	virtual void ActiveCombo() override;

	void OnCollision();
	void OffCollision();

	void SetCanInputCombo(bool CanInputCombo) { bCanInputCombo = CanInputCombo; }

private:
    UFUNCTION()
		void OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	bool bCanInputCombo = false;
	bool bActiveCombo = false;

	INT32 ComboCount = 0;

	class UShapeComponent* Collider;

	TArray<class AActor*> Victims;
};
