#pragma once

#include "RectF.h"
#include "Graphics.h"
#include "Vec2.h"

class Brick
{
public:
    Brick(const Vec2 &topleft_in, const Color &color_in);
    void Draw(Graphics &gfx) const;
    RectF GetRect() const;

private:
    Color color;
    RectF rect;
    float width = 60.0f;
    float height = 18.0f;
    bool isDestroyed;
};