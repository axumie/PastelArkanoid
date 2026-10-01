#pragma once
#include "RectF.h"
#include "SpriteCodex.h"

class Paddle
{
public:
    Paddle(const Vec2 &topleft_in);
    void Draw(Graphics &gfx) const;
    void Move(float dx);
    void SetTopLeft(const Vec2 &topleft_in);
    RectF GetRect() const;
    float GetWidth() const
    {
        return width;
    }
    float GetHeight() const
    {
        return height;
    }

private:
    RectF rect;
    Vec2 topleft;
    float width = 90.0f;
    float height = 10.0f;
};