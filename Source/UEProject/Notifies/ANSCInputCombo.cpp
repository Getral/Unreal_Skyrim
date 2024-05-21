#include "Notifies/ANSCInputCombo.h"
#include "Character/CNaruto.h"

FString UANSCInputCombo::GetNotifyName_Implementation() const
{
    return "InputCombo";
}

void UANSCInputCombo::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
    Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

    if (MeshComp == nullptr) return;
    if (MeshComp->GetOwner() == nullptr) return;

    ACNaruto* naruto = Cast<ACNaruto>(MeshComp->GetOwner());

    if (naruto == nullptr) return;

    naruto->StartInputCombo();
}

void UANSCInputCombo::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    Super::NotifyEnd(MeshComp, Animation, EventReference);

    if (MeshComp == nullptr) return;
    if (MeshComp->GetOwner() == nullptr) return;

    ACNaruto* naruto = Cast<ACNaruto>(MeshComp->GetOwner());

    if (naruto == nullptr) return;

    naruto->EndInputCombo();
}
