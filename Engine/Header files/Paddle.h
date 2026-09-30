#pragma once
#include "RectF.h"
#include "SpriteCodex.h"

class Paddle
{
public:
    Paddle(const Vec2 &topleft_in);
    void Draw(Graphics &gfx) const;

public:
    RectF rect;
    float width = 90.0f;
    float height = 10.0f;
};