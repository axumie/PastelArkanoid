#include "Ball.h"

Ball::Ball(const Vec2 &center_in) : center(center_in)
{
    rect.CreateFromCenter(center, radius, radius);
}

void Ball::Draw(Graphics &gfx) const
{
    SpriteCodex::DrawBall(center, gfx);
}

Vec2 Ball::SetCenter(const Vec2 &newCenter)
{
    center = newCenter;
    return center;
}

Vec2 Ball::GetCenter() const
{
    return center;
}

RectF Ball::GetRect() const
{
    return rect;
}
