#pragma once

#include "Graphics.h"
#include "Vec2.h"
#include "Colors.h"

class SpriteCodex
{
public:
	// centered drawing of 14x14 sprite
	static void DrawBall(const Vec2 &center, Graphics &gfx);
	static void DrawBrick(const Vec2 &topLeft, Color color, Graphics &gfx);
	static void DrawPaddle(const Vec2 &topLeft, Graphics &gfx);
};