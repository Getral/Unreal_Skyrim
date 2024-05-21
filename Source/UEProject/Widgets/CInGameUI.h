#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CInGameUI.generated.h"

UCLASS()
class UEPROJECT_API ACInGameUI : public AHUD
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly)
		class UTexture2D* CrossHair;
	
public:
	virtual void DrawHUD() override;

	void SetDraw(bool isDraw) { bDraw = isDraw; }

private:
	bool bDraw = false;
};
