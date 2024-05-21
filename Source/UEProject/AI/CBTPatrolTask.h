#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "CBTPatrolTask.generated.h"

UCLASS()
class UEPROJECT_API UCBTPatrolTask : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UCBTPatrolTask();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
