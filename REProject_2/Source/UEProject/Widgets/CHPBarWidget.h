#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CHPBarWidget.generated.h"

UCLASS()
class UEPROJECT_API UCHPBarWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent)
		void Update(float CurHealth, float MaxHealth);
};
