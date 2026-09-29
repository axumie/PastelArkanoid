#pragma once

#include "Graphics.h"
#include "Vec2.h"

class RectF
{
public:
    RectF() = default;
    RectF(float top_in, float bottom_in, float left_in, float right_in);
    RectF(const Vec2 &topleft_in, float width_in, float height_in);
    RectF(const Vec2 &topleft_in, const Vec2 &bottomright_in);
    static RectF CreateFromCenter(const Vec2 &center_in, float halfwidth_in, float halfheight_in);
    RectF GetRect() const;

public:
    float top;
    float bottom;
    float left;
    float right;
};