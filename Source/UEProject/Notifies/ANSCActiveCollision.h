#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ANSCActiveCollision.generated.h"

UCLASS()
class UEPROJECT_API UANSCActiveCollision : public UAnimNotifyState
{
	GENERATED_BODY()
	
public:

	// 애니메이션 중 알림에 새로운 이름을 부여하는 함수
	// * 필수는 아니다 : 클래스명이 원래 노티파이 이름을 겸한다
	//   그래도 써주면 ANC 같은 접두사를 빼고 더 쉬운 이름을 붙여줄 수 있다
	FString GetNotifyName_Implementation() const override;

	// virtual void Notify : 원형
	// (이 클래스는 시작과 끝이 있기 때문에 begin, end 존재)
	// ->애니메이션 중에 타이밍에 의해 이 알림이(노티파이가)
	//   호출되면 실행되는 이벤트 함수 (이벤트그래프 호출과 똑같다)
	// * 단, 이 애니메이션의 호출이나 소유자에 대해서만.
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp,
		UAnimSequenceBase* Animation, float TotalDuration,
		const FAnimNotifyEventReference& EventReference);
	
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp,
		UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
};
