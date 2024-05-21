#include "Components/PatrolComponent.h"
#include "AI/CPatrolPath.h"
#include "Components/SplineComponent.h"

UPatrolComponent::UPatrolComponent()
{
	
}

bool UPatrolComponent::GetMoveTo(FVector& OutLocation, float& OutAcceptanceRadius)
{
	OutLocation = FVector::ZeroVector;
	OutAcceptanceRadius = AcceptanceRadius;

	if (Path == nullptr) return false;

	OutLocation = Path->GetSpline()->GetLocationAtSplinePoint(Index, ESplineCoordinateSpace::World);

	return true;
}

void UPatrolComponent::UpdateNextIndex()
{
	if (Path == nullptr) return;
	
	int32 count = Path->GetSpline()->GetNumberOfSplinePoints();

	if (bReverse)
	{
		if (Index > 0)
		{
			Index--;
			return;
		}

		if (Path->GetSpline()->IsClosedLoop())
		{
			Index = count - 1;
			return;
		}

		Index = 1;
		bReverse = false;
		return;
	}

	if (Index < count - 1)
	{
		Index++;
		return;
	}

	if (Path->GetSpline()->IsClosedLoop())
	{
		Index = 0;
		return;
	}

	Index = count - 2;
	bReverse = true;
}

void UPatrolComponent::BeginPlay()
{
	Super::BeginPlay();
	
}
