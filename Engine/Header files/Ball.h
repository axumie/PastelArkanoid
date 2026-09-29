#pragma once

#include "RectF.h"
#include "Graphics.h"
#include "Vec2.h"
#include "SpriteCodex.h"

class Ball
{
public:
    Ball(const Vec2 &center_in);
    void Draw(Graphics &gfx) const;

private:
    Vec2 center;
    float velocity = 5.0f;
    float radius = 7.0f;
};