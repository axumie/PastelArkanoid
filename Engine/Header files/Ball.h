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
    Vec2 SetCenter(const Vec2 &newCenter);
    Vec2 GetCenter() const;
    RectF GetRect() const;

private:
    Vec2 center;
    float radius = 7.0f;
    RectF rect;

    float velocity = 5.0f;
};