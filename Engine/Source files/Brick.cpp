#include "Brick.h"
#include "SpriteCodex.h"

Brick::Brick(float top, float bottom, float left, float right, const Color &color_in)
    : rect(top, bottom, left, right), color(color_in), isDestroyed(false)
{
}

void Brick::Draw(Graphics &gfx) const
{
    if (!isDestroyed)
    {
        SpriteCodex::DrawBrick(Vec2(rect.left, rect.top), color, gfx);
    }
}