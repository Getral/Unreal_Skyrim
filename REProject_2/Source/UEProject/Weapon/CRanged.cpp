#include "Weapon/CRanged.h"
#include "Weapon/CBullet.h"
#include "Character/CUnit.h"
#include "Engine/StaticMesh.h"
#include "Engine/StaticMeshSocket.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Widgets/CInGameUI.h"


void ACRanged::BeginPlay()
{
	Super::BeginPlay();
	
	Mesh = Cast<UStaticMeshComponent>(GetComponentByClass(UStaticMeshComponent::StaticClass()))->GetStaticMesh();
	InGameUI = Owner->GetWorld()->GetFirstPlayerController()->GetHUD<ACInGameUI>();

	CreateBullets();
}

void ACRanged::Attack()
{
    if (bAttacking) return;

	Super::Attack();	
}

void ACRanged::ActiveCombo()
{
	for (ACBullet* bullet : Bullets)
	{
		if (bullet->IsActive() == false)
		{
			FTransform transform = Owner->GetTransform();
			FVector startPos = Owner->GetMesh()->GetSocketLocation("MuzzleSocket");
			transform.SetLocation(startPos);
			
			// ↓ 자동조준 사격 (유도 아님)
			//transform.SetRotation(UKismetMathLibrary::FindLookAtRotation(startPos, TargetPos).Quaternion());
			
			bullet->SetActorTransform(transform);
			bullet->SetActive(true);
			return;
		}
	}
}

void ACRanged::GrabWeapon()
{
	Super::GrabWeapon();

	InGameUI->SetDraw(true);
}

void ACRanged::DropWeapon()
{
	Super::DropWeapon();

	InGameUI->SetDraw(false);
}

void ACRanged::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Owner == OtherActor) return;	

	TSubclassOf<UDamageType> DamageType;

	FComboData* data = ComboDatas[0];

	UGameplayStatics::ApplyDamage(OtherActor, data->Attack,
		Owner->GetController(), this, DamageType);

	FTransform transform = OtherActor->GetTransform();
	transform.AddToTranslation(data->EffectOffset);
	transform.SetRotation(Owner->GetActorRotation().Quaternion());

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), data->Effect, transform);
}

void ACRanged::CreateBullets()
{
	for (int i = 0; i < PoolSize; i++)
	{
		FActorSpawnParameters actorParam;
		actorParam.Owner = this;		

		ACBullet* bullet = GetWorld()->SpawnActor<ACBullet>(BulletClass, actorParam);
		bullet->SetActive(false);
		Bullets.Add(bullet);
	}
}
