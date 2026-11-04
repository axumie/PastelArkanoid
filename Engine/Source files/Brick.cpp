#include "Brick.h"
#include "SpriteCodex.h"

Brick::Brick(const Vec2 &topleft_in, const Color &color_in)
    : color(color_in), isDestroyed(false)
{
    rect = RectF(topleft_in, width, height);
}

void Brick::Draw(Graphics &gfx) const
{
    if (!isDestroyed)
    {
        SpriteCodex::DrawBrick(Vec2(rect.left, rect.top), color, gfx);
    }
}

RectF Brick::GetRect() const
{
    return rect;
}