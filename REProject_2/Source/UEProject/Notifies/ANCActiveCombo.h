#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ANCActiveCombo.generated.h"

UCLASS()
class UEPROJECT_API UANCActiveCombo : public UAnimNotify
{
	GENERATED_BODY()
	
public:
	// �ִϸ��̼� �˸��� ���ο� �̸� �ο��ϱ�
	// * Ŭ���� �̸��� �̹� �˸��� �̸�������,
	//   �� �Լ��� �߰��� ���� ������ �̸��� �ο��� �� �ִ�
	FString GetNotifyName_Implementation() const override;

	//��Ƽ���̰� ȣ��Ǿ��� ���� �̺�Ʈ
	// * �� ���⼭ �ۼ� ������ �̺�Ʈ��
	//   �� �˸��� ���� �ִϸ��̼ǿ� ���ؼ�.
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
		const FAnimNotifyEventReference& EventReference) override;

};
