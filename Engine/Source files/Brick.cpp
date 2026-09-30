#include "Brick.h"
#include "SpriteCodex.h"

Brick::Brick(const Vec2 &topleft_in, const Color &color_in)
    : rect(topleft_in, width, height), color(color_in), isDestroyed(false)
{
}

void Brick::Draw(Graphics &gfx) const
{
    if (!isDestroyed)
    {
        SpriteCodex::DrawBrick(Vec2(rect.left, rect.top), color, gfx);
    }
}