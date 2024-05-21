#include "Notifies/ANCGrabWeapon.h"
#include "Character/CUnit.h"

FString UANCGrabWeapon::GetNotifyName_Implementation() const
{
    return "GrabWeapon";
}

void UANCGrabWeapon::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    Super::Notify(MeshComp, Animation, EventReference);

    if (MeshComp == nullptr) return;
    if (MeshComp->GetOwner() == nullptr) return;

    ACUnit* unit = Cast<ACUnit>(MeshComp->GetOwner());

    if (unit == nullptr) return;

    unit->GrabWeapon();
}
