#include "Paddle.h"

Paddle::Paddle(const RectF &rect_in, const Vec2 &position_in) : rect(rect_in), position(position_in)
{
}

void Paddle::Draw(Graphics &gfx) const
{
    SpriteCodex::DrawPaddle(position, gfx);
}
