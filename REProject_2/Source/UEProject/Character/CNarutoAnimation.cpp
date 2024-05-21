#include "Character/CNarutoAnimation.h"
#include "GameFramework/CharacterMovementComponent.h"

void UCNarutoAnimation::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);    

    if (Owner == nullptr) return;
    
    Rotation = CalculateDirection(Owner->GetVelocity(), Owner->GetControlRotation());

    bFalling = Owner->GetCharacterMovement()->IsFalling();
    bAirJump = Owner->IsAirJump();

    State = Owner->GetState();
}
