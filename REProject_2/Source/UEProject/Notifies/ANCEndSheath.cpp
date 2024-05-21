#include "Notifies/ANCEndSheath.h"
#include "Character/CUnit.h"

FString UANCEndSheath::GetNotifyName_Implementation() const
{
    return "EndSheath";
}

void UANCEndSheath::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    Super::Notify(MeshComp, Animation, EventReference);

    if (MeshComp == nullptr) return;
    if (MeshComp->GetOwner() == nullptr) return;

    ACUnit* unit = Cast<ACUnit>(MeshComp->GetOwner());

    if (unit == nullptr) return;

    unit->EndSheathWeapon();
}
