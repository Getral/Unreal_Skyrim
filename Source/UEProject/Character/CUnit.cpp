#include "Character/CUnit.h"
#include "Weapon/CWeapon.h"
#include "Weapon/CMelee.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "Animation/AnimMontage.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CStatusComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "Widgets/CNameWidget.h"
#include "Widgets/CHPBarWidget.h"
#include "Materials/MaterialInstanceDynamic.h"

ACUnit::ACUnit()
{ 	
	PrimaryActorTick.bCanEverTick = true;	

	NameWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("NameUI"));
	NameWidget->SetupAttachment(GetMesh());

	HPBarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPBarUI"));
	HPBarWidget->SetupAttachment(GetMesh());
	HPBarWidget->SetRelativeLocation(FVector(0, 0, 200));

	Status = CreateDefaultSubobject<UCStatusComponent>(TEXT("StatusComponent"));
}

void ACUnit::BeginPlay()
{
	Super::BeginPlay();
	
	CreateWeapons();

	GetCharacterMovement()->MaxWalkSpeed = Status->GetSpeed();
	Cast<UCNameWidget>(NameWidget->GetUserWidgetObject())->SetName(UnitName);
	Cast<UCHPBarWidget>(HPBarWidget->GetUserWidgetObject())->Update(Status->GetCurHealth(), Status->GetMaxHealth());

	UMaterialInterface* curMaterial = GetMesh()->GetMaterial(0);

	BodyMaterial = UMaterialInstanceDynamic::Create(curMaterial, this);

	BodyColor.R = FMath::RandRange(0.0f, 1.0f);
	BodyColor.G = FMath::RandRange(0.0f, 1.0f);
	BodyColor.B = FMath::RandRange(0.0f, 1.0f);
	BodyColor.A = 1.0f;

	BodyMaterial->SetVectorParameterValue("BodyColor", BodyColor);
	BodyMaterial->SetVectorParameterValue("HitColor", FLinearColor(0, 0, 0, 1));

	GetMesh()->SetMaterial(0, BodyMaterial);
}

void ACUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ACUnit::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);	

	float damage = DamageAmount - Status->GetDefence();	
	
	damage = FMath::Clamp(damage, 0.0f, damage);
	
	Status->Damage(damage);
	Cast<UCHPBarWidget>(HPBarWidget->GetUserWidgetObject())->Update(Status->GetCurHealth(), Status->GetMaxHealth());
	
	UKismetSystemLibrary::PrintString(GetWorld(), FString::SanitizeFloat(Status->GetCurHealth()));	

	if (Status->GetCurHealth() > 0.0f)
	{
		PlayAnimMontage(HitMotion);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), HitSound, GetActorLocation());
				
		BodyMaterial->SetVectorParameterValue("HitColor", FLinearColor(1, 0, 0, 1));
		UKismetSystemLibrary::K2_SetTimer(this, "SetOriginBodyColor", 0.1f, false);
	}
	else
	{
		PlayAnimMontage(DeathMotion);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), DeathSound, GetActorLocation());
	
		SetActorEnableCollision(false);
	}	

	return 0.0f;
}

void ACUnit::CreateWeapons()
{
	FActorSpawnParameters actorParam;
	actorParam.Owner = this;

	//for (auto WeaponClass : WeaponClasses)
	for (TPair<EActionState, TSubclassOf<ACWeapon>> WeaponClass : WeaponClasses)
	{
		ACWeapon* weapon = GetWorld()->SpawnActor<ACWeapon>(WeaponClass.Value, actorParam);
		weapon->AttachWeapon(GetMesh());		
		Weapons.Add(WeaponClass.Key, weapon);
	}
}

void ACUnit::Terminate()
{	
	for (TPair<EActionState, ACWeapon*> weapon : Weapons)
	{
		weapon.Value->SetActive(false);
	}

	SetActorHiddenInGame(true);
}

void ACUnit::SetOriginBodyColor()
{
	BodyMaterial->SetVectorParameterValue("HitColor", FLinearColor(0, 0, 0, 1));
}

void ACUnit::EndDrawWeapon()
{
	bCanMove = true;
	GetMesh()->GetAnimInstance()->StopAllMontages(0.1f);
}

void ACUnit::EndSheathWeapon()
{
	FRotator rot = GetActorRotation();
	rot.Pitch = 0;
	rot.Roll = 0;

	SetActorRotation(rot);

	if (NextEquipType != EActionState::Unarmed)
	{
		ActionType = NextEquipType;
		NextEquipType = EActionState::Unarmed;

		PlayAnimMontage(GetCurWeapon()->DrawMontage);
	}
	else
	{
		bCanMove = true;
		ActionType = EActionState::Unarmed;
		GetMesh()->GetAnimInstance()->StopAllMontages(0.1f);
	}
}

void ACUnit::EndAttack()
{
	GetCurWeapon()->EndAttack();
	bCanMove = true;
}

void ACUnit::GrabWeapon()
{	
	Weapons[ActionType]->GrabWeapon();
}

void ACUnit::DropWeapon()
{
	Weapons[ActionType]->DropWeapon();	
}

void ACUnit::EquipWeapon(EActionState EquipType)
{
	if (GetCharacterMovement()->IsFalling()) return;

	ACWeapon* weapon = GetCurWeapon();

	if (weapon)
	{
		if (GetMesh()->GetAnimInstance()->Montage_IsPlaying(weapon->DrawMontage)) return;
		if (GetMesh()->GetAnimInstance()->Montage_IsPlaying(weapon->SheathMontage)) return;
	}

	if (ActionType == EActionState::Unarmed)
	{
		ActionType = EquipType;
		PlayAnimMontage(GetCurWeapon()->DrawMontage);
	}
	else
	{
		PlayAnimMontage(weapon->SheathMontage);

		if (ActionType != EquipType)
			NextEquipType = EquipType;
	}

	GetCharacterMovement()->StopMovementImmediately();
	bCanMove = false;
}

void ACUnit::StartInputCombo()
{
	Cast<ACMelee>(GetCurWeapon())->SetCanInputCombo(true);
}

void ACUnit::EndInputCombo()
{
	Cast<ACMelee>(GetCurWeapon())->SetCanInputCombo(false);
}

void ACUnit::ActiveCombo()
{
	if (GetCharacterMovement()->IsFalling()) return;

	GetCurWeapon()->ActiveCombo();
}

void ACUnit::EndDeath()
{	
	GetMesh()->bPauseAnims = true;

	UKismetSystemLibrary::K2_SetTimer(this, "Terminate", 2.0f, false);
}
