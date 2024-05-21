#include "Notifies/ANCEndDraw.h"
#include "Character/CUnit.h"

FString UANCEndDraw::GetNotifyName_Implementation() const
{
    return "EndDraw";
}

void UANCEndDraw::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    Super::Notify(MeshComp, Animation, EventReference);

    if (MeshComp == nullptr) return;
    if (MeshComp->GetOwner() == nullptr) return;

    ACUnit* unit = Cast<ACUnit>(MeshComp->GetOwner());

    if (unit == nullptr) return;

    unit->EndDrawWeapon();
}
