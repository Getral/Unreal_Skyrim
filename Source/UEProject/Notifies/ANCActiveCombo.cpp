#include "Notifies/ANCActiveCombo.h"
#include "Character/CNaruto.h"

FString UANCActiveCombo::GetNotifyName_Implementation() const
{
    return "ActiveCombo";
}

// �ִϸ��̼� ��� �� �������� �˸��� ������ ���
// ����Ǵ� �Լ� (~Begin, ~End ��������)
void UANCActiveCombo::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    Super::Notify(MeshComp, Animation, EventReference);

    // ���̷�Ż �޽� IsValid ����
    if (MeshComp == nullptr) return;
    if (MeshComp->GetOwner() == nullptr) return;

    // IsValid�� ������ ������ ������ �޾ƿ���
    // ���ʸ� �޾ƿͼ� ������� ����ȯ�ϴ� �Ͱ� ����(�������Ʈ)
    ACNaruto* naruto = Cast<ACNaruto>(MeshComp->GetOwner());

    if (naruto == nullptr) return;

    //�����信�� �־����� Ŀ���� �̺�Ʈ�� �ٷ� ����
    naruto->ActiveCombo();
}
