#include "Notifies/ANCActiveCombo.h"
#include "Character/CNaruto.h"

FString UANCActiveCombo::GetNotifyName_Implementation() const
{
    return "ActiveCombo";
}

// 애니메이션 재생 중 프레임이 알림에 도달할 경우
// 실행되는 함수 (~Begin, ~End 마찬가지)
void UANCActiveCombo::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    Super::Notify(MeshComp, Animation, EventReference);

    // 스켈레탈 메시 IsValid 실행
    if (MeshComp == nullptr) return;
    if (MeshComp->GetOwner() == nullptr) return;

    // IsValid에 문제가 없으면 나루토 받아오기
    // 오너를 받아와서 나루토로 형변환하는 것과 같다(블루프린트)
    ACNaruto* naruto = Cast<ACNaruto>(MeshComp->GetOwner());

    if (naruto == nullptr) return;

    //나루토에게 주어졌던 커스텀 이벤트를 바로 실행
    naruto->ActiveCombo();
}
