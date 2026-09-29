#pragma once

#include "RectF.h"
#include "Graphics.h"

class Brick
{
public:
    Brick(float top, float bottom, float left, float right, const Color &color_in);
    void Draw(Graphics &gfx) const;

public:
    Color color;
    RectF rect;
    bool isDestroyed;
};