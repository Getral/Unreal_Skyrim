#include "Widgets/CInGameUI.h"
#include "Engine/Texture2D.h"
#include "Engine/Canvas.h"

void ACInGameUI::DrawHUD()
{
    if (!bDraw) return;
    if (CrossHair == nullptr) return;

    FVector2D center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);
    FVector2D size(CrossHair->GetSurfaceWidth(), CrossHair->GetSurfaceHeight());
    FVector2D position = center - size * 0.5f;

    FCanvasTileItem item(position, CrossHair->Resource, FLinearColor::White);
    item.BlendMode = SE_BLEND_Translucent;
    
    Canvas->DrawItem(item);
}
