#include "Paddle.h"

Paddle::Paddle(const Vec2 &topleft_in)
{
    rect = RectF(topleft_in, width, height);
}

void Paddle::Draw(Graphics &gfx) const
{
    SpriteCodex::DrawPaddle(Vec2(rect.left, rect.top), gfx);
}
