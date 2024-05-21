#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ANSCActiveCollision.generated.h"

UCLASS()
class UEPROJECT_API UANSCActiveCollision : public UAnimNotifyState
{
	GENERATED_BODY()
	
public:

	// �ִϸ��̼� �� �˸��� ���ο� �̸��� �ο��ϴ� �Լ�
	// * �ʼ��� �ƴϴ� : Ŭ�������� ���� ��Ƽ���� �̸��� ���Ѵ�
	//   �׷��� ���ָ� ANC ���� ���λ縦 ���� �� ���� �̸��� �ٿ��� �� �ִ�
	FString GetNotifyName_Implementation() const override;

	// virtual void Notify : ����
	// (�� Ŭ������ ���۰� ���� �ֱ� ������ begin, end ����)
	// ->�ִϸ��̼� �߿� Ÿ�ֿ̹� ���� �� �˸���(��Ƽ���̰�)
	//   ȣ��Ǹ� ����Ǵ� �̺�Ʈ �Լ� (�̺�Ʈ�׷��� ȣ��� �Ȱ���)
	// * ��, �� �ִϸ��̼��� ȣ���̳� �����ڿ� ���ؼ���.
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp,
		UAnimSequenceBase* Animation, float TotalDuration,
		const FAnimNotifyEventReference& EventReference);
	
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp,
		UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
};
