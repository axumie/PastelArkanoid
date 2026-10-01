#include "Paddle.h"

Paddle::Paddle(const Vec2 &topleft_in)
{
    topleft = topleft_in;
    rect = RectF(topleft, width, height);
}

void Paddle::Draw(Graphics &gfx) const
{
    SpriteCodex::DrawPaddle(Vec2(rect.left, rect.top), gfx);
}

void Paddle::Move(float dx)
{
    rect.left += dx;
    rect.right += dx;
}

void Paddle::SetTopLeft(const Vec2 &topleft_in)
{
    rect.left = topleft_in.x;
    rect.top = topleft_in.y;

    rect.right = rect.left + width;
    rect.bottom = rect.top + height;
}

RectF Paddle::GetRect() const
{
    return rect;
}
