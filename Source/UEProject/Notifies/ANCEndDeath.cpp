#include "Notifies/ANCEndDeath.h"
#include "Character/CUnit.h"

FString UANCEndDeath::GetNotifyName_Implementation() const
{
    return "EndDeath";
}

void UANCEndDeath::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    Super::Notify(MeshComp, Animation, EventReference);

    if (MeshComp == nullptr) return;
    if (MeshComp->GetOwner() == nullptr) return;

    ACUnit* unit = Cast<ACUnit>(MeshComp->GetOwner());

    if (unit == nullptr) return;

    unit->EndDeath();
}
