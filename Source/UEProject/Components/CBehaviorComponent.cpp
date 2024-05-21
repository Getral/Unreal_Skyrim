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
	//여기에 있는 SetValue가 진짜 호출해야 하는 대상
	//->블루프린트와 용법 자체는 똑같다 (키와 데이터)
	//->블랙보드가 이렇게 번거로운 이유는 결국 안에 있는 데이터가
	//->템플릿 맵이라서 (범용성을 추구)
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


