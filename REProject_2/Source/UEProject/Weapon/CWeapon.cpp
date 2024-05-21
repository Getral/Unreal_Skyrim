#include "Weapon/CWeapon.h"
#include "Character/CNaruto.h"
#include "GameFramework/Character.h"

ACWeapon::ACWeapon()
{
}

void ACWeapon::AttachWeapon(USceneComponent* Parent)
{
	AttachToComponent(Parent,
		FAttachmentTransformRules(EAttachmentRule::KeepRelative, true),
		HolsterSocketName);

	TArray<FName> rowNames = DataTable->GetRowNames();
	
	for (FName name : rowNames)
	{
		FComboData* data = DataTable->FindRow<FComboData>(name, name.ToString());
		ComboDatas.Add(data);
	}	

	SetActorHiddenInGame(true);
}

void ACWeapon::GrabWeapon()
{
	AttachToComponent(Owner->GetMesh(),
		FAttachmentTransformRules(EAttachmentRule::KeepRelative, true),
		EquipSocketName);

	SetActorHiddenInGame(false);
}

void ACWeapon::DropWeapon()
{
	AttachToComponent(Owner->GetMesh(),
		FAttachmentTransformRules(EAttachmentRule::KeepRelative, true),
		HolsterSocketName);

	SetActorHiddenInGame(true);
}

void ACWeapon::Attack()
{
	bAttacking = true;

	Owner->SetCanMove(ComboDatas[0]->bCanMove);
	Owner->PlayAnimMontage(ComboDatas[0]->Motion);
}

void ACWeapon::ActiveCombo()
{
}

void ACWeapon::EndAttack()
{
	bAttacking = false;
}

void ACWeapon::SetActive(bool IsActive)
{
	SetActorHiddenInGame(!IsActive);
}

void ACWeapon::BeginPlay()
{
	Super::BeginPlay();
		
	Owner = Cast<ACUnit>(GetOwner());
}
