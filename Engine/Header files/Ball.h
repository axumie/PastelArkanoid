#pragma once

#include "RectF.h"
#include "Graphics.h"
#include "Vec2.h"
#include "SpriteCodex.h"
#include "RectF.h"

class Ball
{
public:
    Ball(const Vec2 &center_in);
    void Draw(Graphics &gfx) const;
    void Update();
    float GetRadius() const;
    void ReflectBallX();
    void ReflectBallY();
    Vec2 SetCenter(const Vec2 &newCenter);
    void Setdir(const Vec2 &dir);
    Vec2 GetCenter() const;
    RectF GetRect() const;

private:
    Vec2 center;
    float radius = 7.0f;
    RectF rect;
    Vec2 vel = Vec2(0.0f, 0.0f);
    float speed = 3.0f;
};