#include "Notifies/ANCEndAttack.h"
#include "Character/CUnit.h"

FString UANCEndAttack::GetNotifyName_Implementation() const
{
    return "EndAttack";
}

void UANCEndAttack::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    Super::Notify(MeshComp, Animation, EventReference);

    if (MeshComp == nullptr) return;
    if (MeshComp->GetOwner() == nullptr) return;

    ACUnit* unit = Cast<ACUnit>(MeshComp->GetOwner());

    if (unit == nullptr) return;

    unit->EndAttack();
}
