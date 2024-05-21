#include "Notifies/ANCDropSword.h"
#include "Character/CUnit.h"

FString UANCDropSword::GetNotifyName_Implementation() const
{
    return "DropWeapon";
}

void UANCDropSword::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    Super::Notify(MeshComp, Animation, EventReference);

    if (MeshComp == nullptr) return;
    if (MeshComp->GetOwner() == nullptr) return;

    ACUnit* unit = Cast<ACUnit>(MeshComp->GetOwner());

    if (unit == nullptr) return;

    unit->DropWeapon();
}
