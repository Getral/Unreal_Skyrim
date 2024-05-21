#include "Character/CUnitAnimation.h"
#include "Character/CUnit.h"

void UCUnitAnimation::NativeBeginPlay()
{
    Super::NativeBeginPlay();

    Owner = Cast<ACUnit>(TryGetPawnOwner());
}

void UCUnitAnimation::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);

    if (Owner == nullptr) return;

    Speed = Owner->GetVelocity().Size2D();
}
