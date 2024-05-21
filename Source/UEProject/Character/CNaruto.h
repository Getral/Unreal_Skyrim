#pragma once

#include "CoreMinimal.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h" 

#include "Character/CUnit.h"
#include "Engine/DataTable.h"
#include "GenericTeamAgentInterface.h"
#include "CNaruto.generated.h"

UCLASS()
class UEPROJECT_API ACNaruto : public ACUnit, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

protected:
    UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* SpringArm;
	
    UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent* Camera;

public:	
	ACNaruto();

protected:	
	virtual void BeginPlay() override;

public:		
	virtual void Tick(float DeltaTime) override;
		
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;	

	virtual FGenericTeamId GetGenericTeamId() const override;

private:

	// Legacy Axis

	void OnMoveForward(float Axis);
	void OnMoveRight(float Axis);
	void OnRotateHorizontal(float Axis);
	void OnRotateVertical(float Axis);

	// Action (Legacy and EI)

	void OnJump();	
	void OnEquipSword();
	void OnEquipRifle();
	void OnAttack();
	void OffAttack();

public:

	// Enhanced Input

	UPROPERTY(EditAnywhere, Category = Input, BlueprintReadWrite)
		UInputMappingContext* MappingContext;

	UPROPERTY(EditAnywhere, Category = Input, BlueprintReadWrite)
		UInputAction* Input_Move;

	UPROPERTY(EditAnywhere, Category = Input, BlueprintReadWrite)
		UInputAction* Input_Look;

	UPROPERTY(EditAnywhere, Category = Input, BlueprintReadWrite)
		UInputAction* Input_Jump;

	UPROPERTY(EditAnywhere, Category = Input, BlueprintReadWrite)
		UInputAction* Input_Attack;

	UPROPERTY(EditAnywhere, Category = Input, BlueprintReadWrite)
		UInputAction* Input_EquipSword;

	UPROPERTY(EditAnywhere, Category = Input, BlueprintReadWrite)
		UInputAction* Input_EquipRifle;

	UFUNCTION()
		void EI_Move(const FInputActionValue& value);

	UFUNCTION()
		void EI_Look(const FInputActionValue& value);

private:

	// Trace

	void LineCollision();

private:
	float RotSpeed = 30.0f;

	bool bEnableAttack = false;
};
