#include "Notifies/ANSCActiveCollision.h"
#include "Character/CUnit.h"
#include "Weapon/CMelee.h"

FString UANSCActiveCollision::GetNotifyName_Implementation() const
{
    // �̸� �ο� : ���� ���ϴ� �̸��� �״�� ��ȯ�� �ϸ� ��
    return "ActiveCollision";
}

void UANSCActiveCollision::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
    Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

    if (MeshComp == nullptr) return;
    if (MeshComp->GetOwner() == nullptr) return;

    ACUnit* unit = Cast<ACUnit>(MeshComp->GetOwner());

    if (unit == nullptr) return;

    ACMelee* weapon = Cast<ACMelee>(unit->GetCurWeapon());
    weapon->OnCollision();
}

void UANSCActiveCollision::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    Super::NotifyEnd(MeshComp, Animation, EventReference);

    if (MeshComp == nullptr) return;
    if (MeshComp->GetOwner() == nullptr) return;

    ACUnit* unit = Cast<ACUnit>(MeshComp->GetOwner());

    if (unit == nullptr) return;

    ACMelee* weapon = Cast<ACMelee>(unit->GetCurWeapon());
    weapon->OffCollision();
}
