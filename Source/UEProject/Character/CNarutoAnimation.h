#pragma once

#include "CoreMinimal.h"
#include "CUnitAnimation.h"
#include "CUnit.h"
#include "CNarutoAnimation.generated.h"


UCLASS()
class UEPROJECT_API UCNarutoAnimation : public UCUnitAnimation
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		float Rotation;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		bool bFalling;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		bool bAirJump;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TEnumAsByte<EActionState> State;

public:
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
};
