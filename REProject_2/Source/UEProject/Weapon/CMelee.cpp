#include "Weapon/CMelee.h"
#include "Character/CNaruto.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"

void ACMelee::BeginPlay()
{
	Super::BeginPlay();

	Collider = Cast<UShapeComponent>(GetComponentByClass(UShapeComponent::StaticClass()));
	Collider->OnComponentBeginOverlap.AddDynamic(this, &ACMelee::OnHitBeginOverlap);
	Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ACMelee::Attack()
{
	if (bCanInputCombo)
		bActiveCombo = true;

	if (bAttacking) return;

	Super::Attack();
	ComboCount = 1;
}

void ACMelee::ActiveCombo()
{
	if (bActiveCombo == false) return;	

	Owner->SetCanMove(ComboDatas[ComboCount]->bCanMove);
	Owner->PlayAnimMontage(ComboDatas[ComboCount]->Motion);

	ComboCount++;
	bActiveCombo = false;
}

void ACMelee::OnCollision()
{
	Collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

void ACMelee::OffCollision()
{
	Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Victims.Empty();
}

void ACMelee::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Owner == OtherActor) return;	
	if (Victims.Find(OtherActor) != -1) return;

	TSubclassOf<UDamageType> DamageType;	
	
	FComboData* data = ComboDatas[ComboCount - 1];

	UGameplayStatics::ApplyDamage(OtherActor, data->Attack,
		Owner->GetController(), this, DamageType);

	FTransform transform = Owner->GetTransform();
	transform.AddToTranslation(data->EffectOffset);

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), data->Effect, transform);

	Victims.Add(OtherActor);
}
