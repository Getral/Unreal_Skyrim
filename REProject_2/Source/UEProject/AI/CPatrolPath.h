#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPatrolPath.generated.h"

UCLASS()
class UEPROJECT_API ACPatrolPath : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere)
		bool bLoop;

	UPROPERTY(VisibleDefaultsOnly)
		class USplineComponent* Spline;
	
public:	
	ACPatrolPath();

	class USplineComponent* GetSpline() { return Spline; }

	virtual void OnConstruction(const FTransform& Transform) override;

protected:	
	virtual void BeginPlay() override;

};
