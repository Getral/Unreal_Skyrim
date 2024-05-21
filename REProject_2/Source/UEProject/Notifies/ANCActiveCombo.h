#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ANCActiveCombo.generated.h"

UCLASS()
class UEPROJECT_API UANCActiveCombo : public UAnimNotify
{
	GENERATED_BODY()
	
public:
	// 애니메이션 알림에 새로운 이름 부여하기
	// * 클래스 이름이 이미 알림의 이름이지만,
	//   이 함수로 추가로 인지 가능한 이름을 부여할 수 있다
	FString GetNotifyName_Implementation() const override;

	//노티파이가 호출되었을 때의 이벤트
	// * 단 여기서 작성 가능한 이벤트는
	//   이 알림이 붙은 애니메이션에 한해서.
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
		const FAnimNotifyEventReference& EventReference) override;

};
