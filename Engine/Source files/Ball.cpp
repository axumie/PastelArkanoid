#include "Ball.h"

Ball::Ball(const Vec2 &center_in) : center(center_in)
{
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
