#include "Ball.h"

Ball::Ball(const Vec2 &center_in) : center(center_in)
{
}

void Ball::Draw(Graphics &gfx) const
{
    SpriteCodex::DrawBall(center, gfx);
}
