#pragma once
#include "RectF.h"
#include "SpriteCodex.h"

class Paddle
{
public:
    Paddle(const RectF &rect_in, const Vec2 &position_in);
    void Draw(Graphics &gfx) const;

public:
    RectF rect;
    Vec2 position;
};