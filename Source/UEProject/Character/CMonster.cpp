#include "Character/CMonster.h"
#include "Components/CapsuleComponent.h"
#include "Components/PatrolComponent.h"

ACMonster::ACMonster()
{
    Patrol = CreateDefaultSubobject<UPatrolComponent>("Patrol");
}

void ACMonster::BeginPlay()
{
    Super::BeginPlay();

    EquipWeapon(EActionState::Blade);    

    //GetCapsuleComponent()->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel1);
    //GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility,
    //    ECollisionResponse::ECR_Block);
}