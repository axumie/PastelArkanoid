#include "Brick.h"

Brick::Brick(float top, float bottom, float left, float right, const Color &color_in)
    : rect(top, bottom, left, right), color(color_in), isDestroyed(false)
{
}

void Brick::DrawBrick(Graphics &gfx) const
{
    if (!isDestroyed)
    {
        gfx.DrawRect(rect.left,
                     rect.top,
                     rect.right,
                     rect.bottom, color);
    }
}