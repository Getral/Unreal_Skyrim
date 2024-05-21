#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "CBTAttackTask.generated.h"

UCLASS()
class UEPROJECT_API UCBTAttackTask : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UCBTAttackTask();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
