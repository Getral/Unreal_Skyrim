// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CBullet.generated.h"

UCLASS()
class UEPROJECT_API ACBullet : public AActor
{
	GENERATED_BODY()
	
public:		
	ACBullet();

	void SetActive(bool bActive);

	bool IsActive() { return bObjectActive; }

protected:	
	virtual void BeginPlay() override;

	UFUNCTION()
		void OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void Inactive();

private:
	class UShapeComponent* Collider;
	class UProjectileMovementComponent* Projectile;
	class ACRanged* Weapon;

	bool bObjectActive = true;
};
