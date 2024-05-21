#pragma once

#include "CoreMinimal.h"
#include "Weapon/CWeapon.h"
#include "CRanged.generated.h"

UCLASS()
class UEPROJECT_API ACRanged : public ACWeapon
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class ACBullet> BulletClass;

	UPROPERTY(EditDefaultsOnly)
		int PoolSize = 30;
	
public:
	virtual void BeginPlay() override;

	virtual void Attack() override;
	virtual void ActiveCombo() override;

	virtual void GrabWeapon() override;
	virtual void DropWeapon() override;

	UFUNCTION()
		void OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void SetTargetPos(FVector Pos) { TargetPos = Pos; }

private:
	void CreateBullets();

private:
	class UStaticMesh* Mesh;
	class ACInGameUI* InGameUI;

	TArray<class ACBullet*> Bullets;

	FVector TargetPos;
};
