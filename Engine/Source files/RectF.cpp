#include "RectF.h"

RectF::RectF(float top_in, float bottom_in, float left_in, float right_in)
{
    top = top_in;
    bottom = bottom_in;
    left = left_in;
    right = right_in;
}

RectF::RectF(const Vec2 &topleft_in, float width_in, float height_in)
{
    top = topleft_in.y;
    left = topleft_in.x;
    bottom = topleft_in.y + height_in;
    right = topleft_in.x + width_in;
}

RectF::RectF(const Vec2 &topleft_in, const Vec2 &bottomright_in)
{
    top = topleft_in.y;
    left = topleft_in.x;
    bottom = bottomright_in.y;
    right = bottomright_in.x;
}

RectF RectF::CreateFromCenter(const Vec2 &center_in, float halfwidth_in, float halfheight_in)
{
    return RectF(Vec2(center_in.x - halfwidth_in, center_in.y - halfheight_in),
                 Vec2(center_in.x + halfwidth_in, center_in.y + halfheight_in));
}

RectF RectF::GetRect() const
{
    return *this;
}
