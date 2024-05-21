#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CNameWidget.generated.h"

UCLASS()
class UEPROJECT_API UCNameWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent)
		void SetName(const FString& InName);
};
