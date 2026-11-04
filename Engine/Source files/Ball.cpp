#include "Ball.h"

Ball::Ball(const Vec2 &center_in) : center(center_in)
{
    rect.CreateFromCenter(center, radius, radius);
}

void Ball::Draw(Graphics &gfx) const
{
    SpriteCodex::DrawBall(center, gfx);
}

void Ball::Update()
{
    center += vel;
}

float Ball::GetRadius() const
{
    return radius;
}

void Ball::ReflectBallX()
{
    vel.x = -vel.x;
}

void Ball::ReflectBallY()
{
    vel.y = -vel.y;
}

Vec2 Ball::SetCenter(const Vec2 &newCenter)
{
    center = newCenter;
    return center;
}

void Ball::Setdir(const Vec2 &dir)
{
    vel = dir.GetNormalized() * speed;
}

Vec2 Ball::GetCenter() const
{
    return center;
}

RectF Ball::GetRect() const
{
    return RectF::CreateFromCenter(center, radius, radius);
}
