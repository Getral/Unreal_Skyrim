#include "Weapon/CBullet.h"
#include "Weapon/CRanged.h"
#include "Components/ShapeComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/ProjectileMovementComponent.h"

ACBullet::ACBullet()
{
	
}

void ACBullet::SetActive(bool bActive)
{
	bObjectActive = bActive;

	if (bActive)
	{
		Projectile->Velocity = GetActorForwardVector() * Projectile->InitialSpeed;
		Projectile->bSimulationEnabled = true;		
		
		SetActorHiddenInGame(false);	
		SetActorEnableCollision(true);
		SetActorTickEnabled(true);

		UKismetSystemLibrary::K2_SetTimer(this, "Inactive", 5.0f, false);
	}
	else
	{	
		Projectile->bSimulationEnabled = false;
		
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);
		SetActorTickEnabled(false);
	}	
}

void ACBullet::BeginPlay()
{
	Super::BeginPlay();
	
	Weapon = Cast<ACRanged>(GetOwner());

	Collider = Cast<UShapeComponent>(GetComponentByClass(UShapeComponent::StaticClass()));
	Collider->OnComponentBeginOverlap.AddDynamic(Weapon, &ACRanged::OnHitBeginOverlap);
	Collider->OnComponentBeginOverlap.AddDynamic(this, &ACBullet::OnHitBeginOverlap);

	Projectile = Cast<UProjectileMovementComponent>(GetComponentByClass(UProjectileMovementComponent::StaticClass()));
}

void ACBullet::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor == Weapon) return;
	if (StaticClass() == OtherActor->StaticClass()) return;

	SetActive(false);
}

void ACBullet::Inactive()
{
	SetActive(false);
}
