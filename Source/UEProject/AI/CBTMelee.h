#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "CBTMelee.generated.h"

UCLASS()
class UEPROJECT_API UCBTMelee : public UBTService
{
	GENERATED_BODY()
	
public:
	UCBTMelee();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
