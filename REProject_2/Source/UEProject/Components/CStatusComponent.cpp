#include "Components/CStatusComponent.h"

UCStatusComponent::UCStatusComponent()
{	

}

void UCStatusComponent::Damage(float InAmount)
{
	CurHealth -= InAmount;

	CurHealth = FMath::Clamp(CurHealth, 0.0f, MaxHealth);
}


void UCStatusComponent::BeginPlay()
{
	Super::BeginPlay();
	
	CurHealth = MaxHealth;
}