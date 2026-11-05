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
    bool isDestroyed;

private:
    Color color;
    static constexpr float width = 70.0f;
    static constexpr float height = 25.0f;
    RectF rect;
};