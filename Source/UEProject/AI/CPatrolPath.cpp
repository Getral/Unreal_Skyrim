#include "AI/CPatrolPath.h"
#include "Components/SplineComponent.h"
#include "Components/TextRenderComponent.h"

ACPatrolPath::ACPatrolPath()
{
	Spline = CreateDefaultSubobject<USplineComponent>("Spline");
	Spline->SetupAttachment(RootComponent);
}

void ACPatrolPath::OnConstruction(const FTransform& Transform)
{
	Spline->SetClosedLoop(bLoop);
}

// Called when the game starts or when spawned
void ACPatrolPath::BeginPlay()
{
	Super::BeginPlay();
	
}
