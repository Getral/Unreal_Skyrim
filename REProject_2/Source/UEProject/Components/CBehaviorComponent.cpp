#include "Components/CBehaviorComponent.h"
#include "Character/CUnit.h"
#include "BehaviorTree/BlackboardComponent.h"

bool UCBehaviorComponent::IsType(EBehaviorType InType)
{
	return GetType() == InType;
}

void UCBehaviorComponent::ChangeType(EBehaviorType InType)
{
	EBehaviorType type = GetType();
	//���⿡ �ִ� SetValue�� ��¥ ȣ���ؾ� �ϴ� ���
	//->�������Ʈ�� ��� ��ü�� �Ȱ��� (Ű�� ������)
	//->�����尡 �̷��� ���ŷο� ������ �ᱹ �ȿ� �ִ� �����Ͱ�
	//->���ø� ���̶� (���뼺�� �߱�)
	Blackboard->SetValueAsEnum(BehaviorKey, (uint8)InType);
}

ACUnit* UCBehaviorComponent::GetPlayer()
{
	return Cast<ACUnit>(Blackboard->GetValueAsObject(PlayerKey));
}

UCBehaviorComponent::UCBehaviorComponent()
{
}

void UCBehaviorComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

EBehaviorType UCBehaviorComponent::GetType()
{
	return (EBehaviorType)Blackboard->GetValueAsEnum(BehaviorKey);
}


