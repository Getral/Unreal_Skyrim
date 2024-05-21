#include "Character/CNaruto.h"
#include "Weapon/CWeapon.h"
#include "Weapon/CMelee.h"
#include "Weapon/CRanged.h"
#include "Engine/SkeletalMesh.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Animation/AnimMontage.h"

ACNaruto::ACNaruto()
{
	PrimaryActorTick.bCanEverTick = true;
		
	FString path = L"SkeletalMesh'/Game/Naruto/Model/Naruto.Naruto'";
	ConstructorHelpers::FObjectFinder<USkeletalMesh> findMesh(*path);

	GetMesh()->SetSkeletalMesh(findMesh.Object);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -87.5));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));	
		
	//path = L"AnimBlueprint'/Game/Blueprints/ABPNaruto.ABPNaruto_C'";
	//ConstructorHelpers::FClassFinder<UAnimInstance> findClass(*path);
	//GetMesh()->SetAnimClass(findClass.Class);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

void ACNaruto::BeginPlay()
{
	Super::BeginPlay();		

	if (Cast<APlayerController>(GetController()))
	{
		APlayerController* playerController = Cast<APlayerController>(GetController());

		UEnhancedInputLocalPlayerSubsystem* subSystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(playerController->GetLocalPlayer());

		subSystem->AddMappingContext(MappingContext, 0);
	}
}

void ACNaruto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bAirJump)
		bAirJump = false;

	if (ActionType != EActionState::Unarmed && bEnableAttack)
		GetCurWeapon()->Attack();

	//*warning* Auto Attack
	//LineCollision();
}

void ACNaruto::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//PlayerInputComponent->BindAxis("MoveForward", this, &ACNaruto::OnMoveForward);
	//PlayerInputComponent->BindAxis("MoveRight", this, &ACNaruto::OnMoveRight);
	//PlayerInputComponent->BindAxis("RotateHorizontal", this, &ACNaruto::OnRotateHorizontal);
	//PlayerInputComponent->BindAxis("RotateVertical", this, &ACNaruto::OnRotateVertical);
	//
	//PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &ACNaruto::OnJump);
	//PlayerInputComponent->BindAction("EquipSword", EInputEvent::IE_Pressed, this, &ACNaruto::OnEquipSword);
	//PlayerInputComponent->BindAction("EquipRifle", EInputEvent::IE_Pressed, this, &ACNaruto::OnEquipRifle);
	//PlayerInputComponent->BindAction("Attack", EInputEvent::IE_Pressed, this, &ACNaruto::OnAttack);
	//PlayerInputComponent->BindAction("Attack", EInputEvent::IE_Released, this, &ACNaruto::OffAttack);

	UEnhancedInputComponent* input = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (input != nullptr)
	{
		//Axis
		input->BindAction(Input_Move, ETriggerEvent::Triggered, this, &ACNaruto::EI_Move);
		input->BindAction(Input_Look, ETriggerEvent::Triggered, this, &ACNaruto::EI_Look);
		//Actions
		input->BindAction(Input_Jump, ETriggerEvent::Started, this, &ACNaruto::OnJump);
		input->BindAction(Input_EquipSword, ETriggerEvent::Started, this, &ACNaruto::OnEquipSword);
		input->BindAction(Input_EquipRifle, ETriggerEvent::Started, this, &ACNaruto::OnEquipRifle);
		input->BindAction(Input_Attack, ETriggerEvent::Started, this, &ACNaruto::OnAttack);
		input->BindAction(Input_Attack, ETriggerEvent::Completed, this, &ACNaruto::OffAttack);
	}
}

FGenericTeamId ACNaruto::GetGenericTeamId() const
{
	return FGenericTeamId(TeamID);
}



void ACNaruto::OnMoveForward(float Axis)
{
	if (!bCanMove) return;

	FVector direction = GetActorForwardVector();

	AddMovementInput(direction, Axis);
}

void ACNaruto::OnMoveRight(float Axis)
{
	if (!bCanMove) return;

	FVector direction = GetActorRightVector();

	AddMovementInput(direction, Axis);
}

void ACNaruto::OnRotateHorizontal(float Axis)
{
	if (GetCurWeapon() != nullptr && GetCurWeapon()->IsAttacking()) return;

	AddControllerYawInput(Axis * RotSpeed * GetWorld()->GetDeltaSeconds());
}

void ACNaruto::OnRotateVertical(float Axis)
{
	AddControllerPitchInput(Axis * RotSpeed * GetWorld()->GetDeltaSeconds() * -1);
}

void ACNaruto::OnJump()
{
	Jump();

	if (JumpCurrentCount > 0)
	{
		bAirJump = true;
	}	
}

void ACNaruto::OnEquipSword()
{
	EquipWeapon(EActionState::Sword);
}

void ACNaruto::OnEquipRifle()
{
	EquipWeapon(EActionState::Rifle);
}

void ACNaruto::OnAttack()
{	
	bEnableAttack = true;
}

void ACNaruto::OffAttack()
{
	bEnableAttack = false;
}

void ACNaruto::EI_Move(const FInputActionValue& value)
{
	FVector2D movementVector = value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		FRotator rotation = Controller->GetControlRotation();
		FRotator yawRotation(0, rotation.Yaw, 0);
		FVector forwardDirection = FRotationMatrix(yawRotation).GetScaledAxis(EAxis::X);
		FVector rightDirection = FRotationMatrix(yawRotation).GetScaledAxis(EAxis::Y);

		AddMovementInput(forwardDirection, movementVector.Y);
		AddMovementInput(rightDirection, movementVector.X);
	}
}

void ACNaruto::EI_Look(const FInputActionValue& value)
{
	FVector2D lookVector = value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerPitchInput(lookVector.Y);
		AddControllerYawInput(lookVector.X);
	}
}

void ACNaruto::LineCollision()
{
	if (ActionType != EActionState::Rifle) return;

	FHitResult HitResult;
	
	FVector Start = Camera->GetComponentLocation();
	FVector End = Start + Camera->GetForwardVector() * 5000.0f;

	//if (GetWorld()->LineTraceSingleByChannel(HitResult,
	//	Start, End, ECollisionChannel::ECC_Visibility))
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	TEnumAsByte<EObjectTypeQuery> ObjectType = UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn);		
	ObjectTypes.Add(ObjectType);

	TArray<AActor*> IgnorActors;	
	IgnorActors.Add(this);
	IgnorActors.Add(GetCurWeapon());

	if(UKismetSystemLibrary::LineTraceSingleForObjects(GetWorld(), 
		Start, End, ObjectTypes, false, IgnorActors, EDrawDebugTrace::None, HitResult, true))
	{
		bEnableAttack = true;

		ACRanged* ranged = Cast<ACRanged>(GetCurWeapon());
		ranged->SetTargetPos(HitResult.ImpactPoint);
	}
	else
	{
		bEnableAttack = false;
	}
	
}

