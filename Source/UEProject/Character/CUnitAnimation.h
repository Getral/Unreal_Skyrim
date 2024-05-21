#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CUnitAnimation.generated.h"


UCLASS()
class UEPROJECT_API UCUnitAnimation : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		float Speed;	

public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
	class ACUnit* Owner;
};
