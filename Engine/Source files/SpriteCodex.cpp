#include "SpriteCodex.h"
#include "Colors.h"
#include <algorithm>

namespace
{
	unsigned char AddColor(unsigned char value, int amount)
	{
		int result = int(value) + amount;

		if (result > 255)
		{
			result = 255;
		}

		return (unsigned char)result;
	}

	unsigned char SubtractColor(unsigned char value, int amount)
	{
		int result = int(value) - amount;

		if (result < 0)
		{
			result = 0;
		}

		return (unsigned char)result;
	}
}
// 14x14 ball
void SpriteCodex::DrawBall(const Vec2 &center, Graphics &gfx)
{
	const int x = int(center.x) - 7;
	const int y = int(center.y) - 7;

	gfx.PutPixel(5 + x, 0 + y, 55, 35, 65);
	gfx.PutPixel(6 + x, 0 + y, 55, 35, 65);
	gfx.PutPixel(7 + x, 0 + y, 55, 35, 65);
	gfx.PutPixel(8 + x, 0 + y, 55, 35, 65);
	gfx.PutPixel(3 + x, 1 + y, 55, 35, 65);
	gfx.PutPixel(4 + x, 1 + y, 55, 35, 65);
	gfx.PutPixel(5 + x, 1 + y, 255, 215, 235);
	gfx.PutPixel(6 + x, 1 + y, 255, 150, 195);
	gfx.PutPixel(7 + x, 1 + y, 235, 105, 165);
	gfx.PutPixel(8 + x, 1 + y, 255, 150, 195);
	gfx.PutPixel(9 + x, 1 + y, 55, 35, 65);
	gfx.PutPixel(10 + x, 1 + y, 55, 35, 65);
	gfx.PutPixel(2 + x, 2 + y, 55, 35, 65);
	gfx.PutPixel(3 + x, 2 + y, 255, 215, 235);
	gfx.PutPixel(4 + x, 2 + y, 255, 215, 235);
	gfx.PutPixel(5 + x, 2 + y, 255, 215, 235);
	gfx.PutPixel(6 + x, 2 + y, 255, 215, 235);
	gfx.PutPixel(7 + x, 2 + y, 255, 150, 195);
	gfx.PutPixel(8 + x, 2 + y, 235, 105, 165);
	gfx.PutPixel(9 + x, 2 + y, 235, 105, 165);
	gfx.PutPixel(10 + x, 2 + y, 255, 150, 195);
	gfx.PutPixel(11 + x, 2 + y, 55, 35, 65);
	gfx.PutPixel(1 + x, 3 + y, 55, 35, 65);
	gfx.PutPixel(2 + x, 3 + y, 255, 215, 235);
	gfx.PutPixel(3 + x, 3 + y, 255, 215, 235);
	gfx.PutPixel(4 + x, 3 + y, 255, 245, 250);
	gfx.PutPixel(5 + x, 3 + y, 255, 245, 250);
	gfx.PutPixel(6 + x, 3 + y, 255, 215, 235);
	gfx.PutPixel(7 + x, 3 + y, 255, 150, 195);
	gfx.PutPixel(8 + x, 3 + y, 255, 150, 195);
	gfx.PutPixel(9 + x, 3 + y, 190, 70, 130);
	gfx.PutPixel(10 + x, 3 + y, 235, 105, 165);
	gfx.PutPixel(11 + x, 3 + y, 235, 105, 165);
	gfx.PutPixel(12 + x, 3 + y, 55, 35, 65);
	gfx.PutPixel(1 + x, 4 + y, 55, 35, 65);
	gfx.PutPixel(2 + x, 4 + y, 255, 215, 235);
	gfx.PutPixel(3 + x, 4 + y, 255, 215, 235);
	gfx.PutPixel(4 + x, 4 + y, 255, 245, 250);
	gfx.PutPixel(5 + x, 4 + y, 255, 245, 250);
	gfx.PutPixel(6 + x, 4 + y, 255, 215, 235);
	gfx.PutPixel(7 + x, 4 + y, 255, 150, 195);
	gfx.PutPixel(8 + x, 4 + y, 255, 150, 195);
	gfx.PutPixel(9 + x, 4 + y, 235, 105, 165);
	gfx.PutPixel(10 + x, 4 + y, 190, 70, 130);
	gfx.PutPixel(11 + x, 4 + y, 190, 70, 130);
	gfx.PutPixel(12 + x, 4 + y, 55, 35, 65);
	gfx.PutPixel(0 + x, 5 + y, 55, 35, 65);
	gfx.PutPixel(1 + x, 5 + y, 255, 150, 195);
	gfx.PutPixel(2 + x, 5 + y, 255, 215, 235);
	gfx.PutPixel(3 + x, 5 + y, 255, 215, 235);
	gfx.PutPixel(4 + x, 5 + y, 255, 215, 235);
	gfx.PutPixel(5 + x, 5 + y, 255, 215, 235);
	gfx.PutPixel(6 + x, 5 + y, 255, 215, 235);
	gfx.PutPixel(7 + x, 5 + y, 255, 150, 195);
	gfx.PutPixel(8 + x, 5 + y, 255, 150, 195);
	gfx.PutPixel(9 + x, 5 + y, 235, 105, 165);
	gfx.PutPixel(10 + x, 5 + y, 190, 70, 130);
	gfx.PutPixel(11 + x, 5 + y, 190, 70, 130);
	gfx.PutPixel(12 + x, 5 + y, 235, 105, 165);
	gfx.PutPixel(13 + x, 5 + y, 55, 35, 65);
	gfx.PutPixel(0 + x, 6 + y, 55, 35, 65);
	gfx.PutPixel(1 + x, 6 + y, 255, 150, 195);
	gfx.PutPixel(2 + x, 6 + y, 255, 150, 195);
	gfx.PutPixel(3 + x, 6 + y, 255, 215, 235);
	gfx.PutPixel(4 + x, 6 + y, 255, 215, 235);
	gfx.PutPixel(5 + x, 6 + y, 255, 215, 235);
	gfx.PutPixel(6 + x, 6 + y, 255, 150, 195);
	gfx.PutPixel(7 + x, 6 + y, 255, 150, 195);
	gfx.PutPixel(8 + x, 6 + y, 255, 150, 195);
	gfx.PutPixel(9 + x, 6 + y, 235, 105, 165);
	gfx.PutPixel(10 + x, 6 + y, 190, 70, 130);
	gfx.PutPixel(11 + x, 6 + y, 190, 70, 130);
	gfx.PutPixel(12 + x, 6 + y, 190, 70, 130);
	gfx.PutPixel(13 + x, 6 + y, 55, 35, 65);
	gfx.PutPixel(0 + x, 7 + y, 55, 35, 65);
	gfx.PutPixel(1 + x, 7 + y, 235, 105, 165);
	gfx.PutPixel(2 + x, 7 + y, 255, 150, 195);
	gfx.PutPixel(3 + x, 7 + y, 255, 150, 195);
	gfx.PutPixel(4 + x, 7 + y, 255, 150, 195);
	gfx.PutPixel(5 + x, 7 + y, 255, 150, 195);
	gfx.PutPixel(6 + x, 7 + y, 255, 245, 250);
	gfx.PutPixel(7 + x, 7 + y, 255, 150, 195);
	gfx.PutPixel(8 + x, 7 + y, 235, 105, 165);
	gfx.PutPixel(9 + x, 7 + y, 235, 105, 165);
	gfx.PutPixel(10 + x, 7 + y, 190, 70, 130);
	gfx.PutPixel(11 + x, 7 + y, 190, 70, 130);
	gfx.PutPixel(12 + x, 7 + y, 190, 70, 130);
	gfx.PutPixel(13 + x, 7 + y, 55, 35, 65);
	gfx.PutPixel(0 + x, 8 + y, 125, 65, 130);
	gfx.PutPixel(1 + x, 8 + y, 235, 105, 165);
	gfx.PutPixel(2 + x, 8 + y, 235, 105, 165);
	gfx.PutPixel(3 + x, 8 + y, 255, 150, 195);
	gfx.PutPixel(4 + x, 8 + y, 255, 150, 195);
	gfx.PutPixel(5 + x, 8 + y, 255, 150, 195);
	gfx.PutPixel(6 + x, 8 + y, 255, 150, 195);
	gfx.PutPixel(7 + x, 8 + y, 235, 105, 165);
	gfx.PutPixel(8 + x, 8 + y, 235, 105, 165);
	gfx.PutPixel(9 + x, 8 + y, 235, 105, 165);
	gfx.PutPixel(10 + x, 8 + y, 190, 70, 130);
	gfx.PutPixel(11 + x, 8 + y, 190, 70, 130);
	gfx.PutPixel(12 + x, 8 + y, 235, 105, 165);
	gfx.PutPixel(13 + x, 8 + y, 125, 65, 130);
	gfx.PutPixel(1 + x, 9 + y, 190, 70, 130);
	gfx.PutPixel(2 + x, 9 + y, 190, 70, 130);
	gfx.PutPixel(3 + x, 9 + y, 235, 105, 165);
	gfx.PutPixel(4 + x, 9 + y, 235, 105, 165);
	gfx.PutPixel(5 + x, 9 + y, 235, 105, 165);
	gfx.PutPixel(6 + x, 9 + y, 235, 105, 165);
	gfx.PutPixel(7 + x, 9 + y, 235, 105, 165);
	gfx.PutPixel(8 + x, 9 + y, 235, 105, 165);
	gfx.PutPixel(9 + x, 9 + y, 190, 70, 130);
	gfx.PutPixel(10 + x, 9 + y, 190, 70, 130);
	gfx.PutPixel(11 + x, 9 + y, 235, 105, 165);
	gfx.PutPixel(12 + x, 9 + y, 215, 120, 175);
	gfx.PutPixel(1 + x, 10 + y, 125, 65, 130);
	gfx.PutPixel(2 + x, 10 + y, 255, 150, 195);
	gfx.PutPixel(3 + x, 10 + y, 190, 70, 130);
	gfx.PutPixel(4 + x, 10 + y, 190, 70, 130);
	gfx.PutPixel(5 + x, 10 + y, 235, 105, 165);
	gfx.PutPixel(6 + x, 10 + y, 190, 70, 130);
	gfx.PutPixel(7 + x, 10 + y, 235, 105, 165);
	gfx.PutPixel(8 + x, 10 + y, 190, 70, 130);
	gfx.PutPixel(9 + x, 10 + y, 190, 70, 130);
	gfx.PutPixel(10 + x, 10 + y, 235, 105, 165);
	gfx.PutPixel(11 + x, 10 + y, 255, 150, 195);
	gfx.PutPixel(12 + x, 10 + y, 125, 65, 130);
	gfx.PutPixel(2 + x, 11 + y, 55, 35, 65);
	gfx.PutPixel(3 + x, 11 + y, 255, 150, 195);
	gfx.PutPixel(4 + x, 11 + y, 235, 105, 165);
	gfx.PutPixel(5 + x, 11 + y, 190, 70, 130);
	gfx.PutPixel(6 + x, 11 + y, 190, 70, 130);
	gfx.PutPixel(7 + x, 11 + y, 190, 70, 130);
	gfx.PutPixel(8 + x, 11 + y, 190, 70, 130);
	gfx.PutPixel(9 + x, 11 + y, 235, 105, 165);
	gfx.PutPixel(10 + x, 11 + y, 255, 150, 195);
	gfx.PutPixel(11 + x, 11 + y, 55, 35, 65);
	gfx.PutPixel(3 + x, 12 + y, 55, 35, 65);
	gfx.PutPixel(4 + x, 12 + y, 190, 70, 130);
	gfx.PutPixel(5 + x, 12 + y, 255, 150, 195);
	gfx.PutPixel(6 + x, 12 + y, 255, 150, 195);
	gfx.PutPixel(7 + x, 12 + y, 255, 150, 195);
	gfx.PutPixel(8 + x, 12 + y, 255, 150, 195);
	gfx.PutPixel(9 + x, 12 + y, 190, 70, 130);
	gfx.PutPixel(10 + x, 12 + y, 55, 35, 65);
	gfx.PutPixel(5 + x, 13 + y, 55, 35, 65);
	gfx.PutPixel(6 + x, 13 + y, 55, 35, 65);
	gfx.PutPixel(7 + x, 13 + y, 55, 35, 65);
	gfx.PutPixel(8 + x, 13 + y, 55, 35, 65);
}
// 60 x 18 brick
void SpriteCodex::DrawBrick(const Vec2 &topLeft, Color color, Graphics &gfx)
{
	const int x = int(topLeft.x);
	const int y = int(topLeft.y);

	// ============================================================
	// PASTEL COLOR TRANSFORMATION
	// ============================================================
	//
	// Pull the selected color toward white.
	// This means ANY color passed to DrawBrick() gets a softer,
	// pastel appearance while still keeping its original hue.
	//
	// pastel = original * 0.65 + white * 0.35
	//

	const int pastelR = int(color.GetR() * 0.65f + 255.0f * 0.35f);
	const int pastelG = int(color.GetG() * 0.65f + 255.0f * 0.35f);
	const int pastelB = int(color.GetB() * 0.65f + 255.0f * 0.35f);

	const Color pastelColor(
		pastelR,
		pastelG,
		pastelB);

	// ============================================================
	// DERIVED COLORS
	// ============================================================

	// Soft light
	const Color light(
		AddColor(pastelR, 25),
		AddColor(pastelG, 25),
		AddColor(pastelB, 25));

	// Very light highlight
	const Color highlight(
		AddColor(pastelR, 55),
		AddColor(pastelG, 55),
		AddColor(pastelB, 55));

	// Soft shadow
	const Color shadow(
		SubtractColor(pastelR, 35),
		SubtractColor(pastelG, 35),
		SubtractColor(pastelB, 35));

	// Deeper shadow
	const Color darkShadow(
		SubtractColor(pastelR, 65),
		SubtractColor(pastelG, 65),
		SubtractColor(pastelB, 65));

	// Dark plum instead of neutral black
	const Color outline(55, 35, 65);

	// ============================================================
	// OUTLINE
	// ============================================================

	for (int px = 2; px < 58; ++px)
	{
		gfx.PutPixel(x + px, y + 0, outline);
		gfx.PutPixel(x + px, y + 1, outline);

		gfx.PutPixel(x + px, y + 16, outline);
		gfx.PutPixel(x + px, y + 17, outline);
	}

	for (int py = 2; py < 16; ++py)
	{
		gfx.PutPixel(x + 0, y + py, outline);
		gfx.PutPixel(x + 1, y + py, outline);

		gfx.PutPixel(x + 58, y + py, outline);
		gfx.PutPixel(x + 59, y + py, outline);
	}

	// ============================================================
	// MAIN BODY
	// ============================================================

	for (int py = 2; py < 16; ++py)
	{
		for (int px = 2; px < 58; ++px)
		{
			gfx.PutPixel(x + px, y + py, pastelColor);
		}
	}

	// ============================================================
	// BRIGHT UPPER EDGE
	// ============================================================

	for (int px = 3; px < 57; ++px)
	{
		gfx.PutPixel(x + px, y + 2, highlight);
		gfx.PutPixel(x + px, y + 3, light);
	}

	// ============================================================
	// BRIGHT LEFT EDGE
	// ============================================================

	for (int py = 4; py < 15; ++py)
	{
		gfx.PutPixel(x + 2, y + py, light);
		gfx.PutPixel(x + 3, y + py, light);
	}

	// ============================================================
	// SPECULAR HIGHLIGHT
	// ============================================================

	for (int px = 7; px < 36; ++px)
	{
		gfx.PutPixel(x + px, y + 4, highlight);
	}

	for (int px = 10; px < 31; ++px)
	{
		gfx.PutPixel(x + px, y + 5, highlight);
	}

	// Small soft transition below the shine
	for (int px = 14; px < 27; ++px)
	{
		gfx.PutPixel(x + px, y + 6, light);
	}

	// ============================================================
	// LOWER SHADOW
	// ============================================================

	for (int px = 3; px < 57; ++px)
	{
		gfx.PutPixel(x + px, y + 14, shadow);
		gfx.PutPixel(x + px, y + 15, darkShadow);
	}

	// ============================================================
	// RIGHT SHADOW
	// ============================================================

	for (int py = 4; py < 15; ++py)
	{
		gfx.PutPixel(x + 56, y + py, shadow);
		gfx.PutPixel(x + 57, y + py, darkShadow);
	}
}
// 90 x 10 paddle
void SpriteCodex::DrawPaddle(const Vec2 &topLeft, Graphics &gfx)
{
	const int x = int(topLeft.x);
	const int y = int(topLeft.y);

	// =========================================================
	// PALETTE
	// =========================================================

	const Color outline(55, 35, 65);

	const Color purpleDark(105, 65, 150);
	const Color purple(165, 105, 205);
	const Color purpleLight(215, 155, 235);

	const Color bodyDark(125, 115, 160);
	const Color body(190, 185, 220);
	const Color bodyLight(235, 230, 250);

	const Color blueDark(90, 110, 175);
	const Color blue(145, 180, 230);

	const Color shine(255, 245, 250);

	// =========================================================
	// LEFT BLUE TIP
	// =========================================================

	// Outer outline
	for (int py = 6; py <= 11; ++py)
		gfx.PutPixel(x + 1, y + py, outline);

	for (int py = 5; py <= 12; ++py)
		gfx.PutPixel(x + 2, y + py, outline);

	for (int py = 4; py <= 13; ++py)
		gfx.PutPixel(x + 3, y + py, outline);

	// Blue body
	for (int py = 6; py <= 11; ++py)
		gfx.PutPixel(x + 2, y + py, blueDark);

	for (int py = 5; py <= 12; ++py)
		gfx.PutPixel(x + 3, y + py, blue);

	for (int py = 4; py <= 13; ++py)
		gfx.PutPixel(x + 4, y + py, blue);

	// Highlight
	for (int py = 6; py <= 10; ++py)
		gfx.PutPixel(x + 4, y + py, shine);

	// Dark inner edge
	for (int py = 5; py <= 12; ++py)
		gfx.PutPixel(x + 5, y + py, blueDark);

	// =========================================================
	// RIGHT BLUE TIP
	// =========================================================

	// Outer outline
	for (int py = 6; py <= 11; ++py)
		gfx.PutPixel(x + 90, y + py, outline);

	for (int py = 5; py <= 12; ++py)
		gfx.PutPixel(x + 89, y + py, outline);

	for (int py = 4; py <= 13; ++py)
		gfx.PutPixel(x + 88, y + py, outline);

	// Blue body
	for (int py = 6; py <= 11; ++py)
		gfx.PutPixel(x + 89, y + py, blueDark);

	for (int py = 5; py <= 12; ++py)
		gfx.PutPixel(x + 88, y + py, blue);

	for (int py = 4; py <= 13; ++py)
		gfx.PutPixel(x + 87, y + py, blue);

	// Highlight
	for (int py = 6; py <= 10; ++py)
		gfx.PutPixel(x + 87, y + py, shine);

	// Dark inner edge
	for (int py = 5; py <= 12; ++py)
		gfx.PutPixel(x + 86, y + py, blueDark);

	// =========================================================
	// LEFT PURPLE WING
	// Same thickness as the main base
	// =========================================================

	// Top outline
	for (int px = 5; px <= 21; ++px)
		gfx.PutPixel(x + px, y + 4, outline);

	// Bottom outline
	for (int px = 6; px <= 22; ++px)
		gfx.PutPixel(x + px, y + 13, outline);

	// Outer tapered edge
	for (int py = 5; py <= 12; ++py)
	{
		int px = 5 + (py - 5) / 3;
		gfx.PutPixel(x + px, y + py, outline);
	}

	// Inner edge
	for (int py = 5; py <= 12; ++py)
	{
		gfx.PutPixel(x + 21, y + py, outline);
	}

	// Purple body
	for (int py = 5; py <= 12; ++py)
	{
		int left = 6 + (py - 5) / 3;
		int right = 20;

		for (int px = left; px <= right; ++px)
			gfx.PutPixel(x + px, y + py, purple);
	}

	// Darker upper edge
	for (int px = 7; px <= 19; ++px)
		gfx.PutPixel(x + px, y + 5, purpleDark);

	// Highlight
	for (int px = 9; px <= 16; ++px)
	{
		gfx.PutPixel(x + px, y + 6, purpleLight);
		gfx.PutPixel(x + px, y + 7, purpleLight);
	}

	// Lower shading
	for (int px = 9; px <= 19; ++px)
		gfx.PutPixel(x + px, y + 11, purpleDark);

	for (int px = 10; px <= 19; ++px)
		gfx.PutPixel(x + px, y + 12, purpleDark);

	// =========================================================
	// RIGHT PURPLE WING
	// Same thickness as the main base
	// =========================================================

	// Top outline
	for (int px = 70; px <= 86; ++px)
		gfx.PutPixel(x + px, y + 4, outline);

	// Bottom outline
	for (int px = 69; px <= 85; ++px)
		gfx.PutPixel(x + px, y + 13, outline);

	// Outer tapered edge
	for (int py = 5; py <= 12; ++py)
	{
		int px = 86 - (py - 5) / 3;
		gfx.PutPixel(x + px, y + py, outline);
	}

	// Inner edge
	for (int py = 5; py <= 12; ++py)
	{
		gfx.PutPixel(x + 70, y + py, outline);
	}

	// Purple body
	for (int py = 5; py <= 12; ++py)
	{
		int left = 71;
		int right = 85 - (py - 5) / 3;

		for (int px = left; px <= right; ++px)
			gfx.PutPixel(x + px, y + py, purple);
	}

	// Darker upper edge
	for (int px = 72; px <= 84; ++px)
		gfx.PutPixel(x + px, y + 5, purpleDark);

	// Highlight
	for (int px = 77; px <= 84; ++px)
	{
		gfx.PutPixel(x + px, y + 6, purpleLight);
		gfx.PutPixel(x + px, y + 7, purpleLight);
	}

	// Lower shading
	for (int px = 71; px <= 82; ++px)
		gfx.PutPixel(x + px, y + 11, purpleDark);

	for (int px = 71; px <= 81; ++px)
		gfx.PutPixel(x + px, y + 12, purpleDark);

	// =========================================================
	// MAIN BODY OUTLINE
	// =========================================================

	for (int px = 18; px <= 73; ++px)
	{
		gfx.PutPixel(x + px, y + 4, outline);
		gfx.PutPixel(x + px, y + 13, outline);
	}

	for (int py = 5; py <= 12; ++py)
	{
		gfx.PutPixel(x + 17, y + py, outline);
		gfx.PutPixel(x + 74, y + py, outline);
	}

	// =========================================================
	// MAIN BODY
	// =========================================================

	for (int py = 5; py <= 12; ++py)
	{
		for (int px = 18; px <= 73; ++px)
		{
			gfx.PutPixel(x + px, y + py, body);
		}
	}

	// =========================================================
	// TOP SHINE
	// =========================================================

	for (int px = 22; px <= 69; ++px)
		gfx.PutPixel(x + px, y + 5, bodyLight);

	for (int px = 27; px <= 64; ++px)
		gfx.PutPixel(x + px, y + 6, shine);

	for (int px = 34; px <= 57; ++px)
		gfx.PutPixel(x + px, y + 7, shine);

	// =========================================================
	// SOFT MIDDLE TONE
	// =========================================================

	for (int px = 23; px <= 68; ++px)
		gfx.PutPixel(x + px, y + 8, bodyLight);

	for (int px = 25; px <= 66; ++px)
		gfx.PutPixel(x + px, y + 9, body);

	// =========================================================
	// LOWER SHADING
	// =========================================================

	for (int px = 22; px <= 69; ++px)
		gfx.PutPixel(x + px, y + 10, body);

	for (int px = 22; px <= 69; ++px)
		gfx.PutPixel(x + px, y + 11, bodyDark);

	for (int px = 24; px <= 67; ++px)
		gfx.PutPixel(x + px, y + 12, bodyDark);

	// =========================================================
	// CENTRAL SHINE
	// =========================================================

	gfx.PutPixel(x + 40, y + 6, shine);
	gfx.PutPixel(x + 41, y + 6, shine);
	gfx.PutPixel(x + 42, y + 6, shine);

	gfx.PutPixel(x + 39, y + 7, shine);
	gfx.PutPixel(x + 40, y + 7, shine);
	gfx.PutPixel(x + 41, y + 7, shine);
	gfx.PutPixel(x + 42, y + 7, shine);
	gfx.PutPixel(x + 43, y + 7, shine);

	gfx.PutPixel(x + 40, y + 8, bodyLight);
	gfx.PutPixel(x + 41, y + 8, bodyLight);
	gfx.PutPixel(x + 42, y + 8, bodyLight);
}

void SpriteCodex::DrawBackground(Graphics &gfx)
{
	// =========================================================
	// DEEP NIGHT SKY GRADIENT (DARK BLUE)
	// =========================================================
	for (int y = 0; y < Graphics::ScreenHeight; ++y)
	{
		const unsigned char r = (unsigned char)(8 + (12 * y) / Graphics::ScreenHeight);
		const unsigned char g = (unsigned char)(12 + (20 * y) / Graphics::ScreenHeight);
		const unsigned char b = (unsigned char)(28 + (32 * y) / Graphics::ScreenHeight);
		const Color skyColor(r, g, b);

		for (int x = 0; x < Graphics::ScreenWidth; ++x)
		{
			gfx.PutPixel(x, y, skyColor);
		}
	}

	// =========================================================
	// STARFIELD PALETTE
	// =========================================================
	const Color faintStar(85, 105, 150);
	const Color brightStar(175, 195, 230);

	const Color sparkleCenter(245, 248, 255);
	const Color sparkleArm(115, 140, 190);

	const Color bigSparkleCenter(255, 255, 255);
	const Color bigSparkleInner(185, 210, 245);
	const Color bigSparkleOuter(95, 120, 170);
	const Color bigSparkleDiag(80, 105, 155);

	// Star layout: x, y, type
	// type: 0 = faint (1px), 1 = bright (1px), 2 = small sparkle (3x3), 3 = large sparkle (5x5)
	struct Star
	{
		int x;
		int y;
		int type;
	};

	static const Star stars[] = {
		// Large sparkles
		{ 120, 85, 3 }, { 680, 110, 3 }, { 420, 210, 3 }, { 240, 360, 3 }, { 710, 330, 3 },

		// Small sparkles (3x3 cross)
		{ 65, 140, 2 }, { 190, 70, 2 }, { 310, 130, 2 }, { 510, 95, 2 }, { 620, 190, 2 },
		{ 750, 80, 2 }, { 85, 280, 2 }, { 290, 250, 2 }, { 460, 340, 2 }, { 580, 290, 2 },
		{ 160, 440, 2 }, { 370, 430, 2 }, { 640, 420, 2 }, { 730, 470, 2 }, { 490, 480, 2 },

		// Bright stars (1px)
		{ 35, 50, 1 }, { 95, 110, 1 }, { 150, 160, 1 }, { 210, 95, 1 }, { 260, 180, 1 },
		{ 340, 65, 1 }, { 385, 145, 1 }, { 445, 80, 1 }, { 480, 160, 1 }, { 540, 130, 1 },
		{ 595, 60, 1 }, { 650, 140, 1 }, { 705, 175, 1 }, { 765, 130, 1 }, { 780, 45, 1 },
		{ 45, 210, 1 }, { 135, 250, 1 }, { 180, 310, 1 }, { 225, 230, 1 }, { 275, 310, 1 },
		{ 330, 330, 1 }, { 390, 275, 1 }, { 430, 380, 1 }, { 525, 240, 1 }, { 560, 360, 1 },
		{ 615, 330, 1 }, { 670, 260, 1 }, { 725, 280, 1 }, { 770, 350, 1 }, { 55, 380, 1 },
		{ 110, 460, 1 }, { 205, 410, 1 }, { 255, 490, 1 }, { 315, 450, 1 }, { 410, 480, 1 },
		{ 465, 520, 1 }, { 535, 450, 1 }, { 600, 500, 1 }, { 660, 475, 1 }, { 715, 530, 1 },
		{ 760, 520, 1 }, { 130, 540, 1 }, { 280, 550, 1 }, { 360, 540, 1 }, { 630, 560, 1 },

		// Faint stars (1px)
		{ 20, 90, 0 }, { 75, 40, 0 }, { 140, 80, 0 }, { 175, 130, 0 }, { 230, 50, 0 },
		{ 285, 110, 0 }, { 320, 170, 0 }, { 365, 40, 0 }, { 405, 115, 0 }, { 460, 45, 0 },
		{ 500, 180, 0 }, { 555, 85, 0 }, { 580, 155, 0 }, { 635, 40, 0 }, { 675, 95, 0 },
		{ 720, 60, 0 }, { 745, 160, 0 }, { 790, 105, 0 }, { 30, 165, 0 }, { 80, 230, 0 },
		{ 115, 195, 0 }, { 165, 220, 0 }, { 210, 275, 0 }, { 250, 200, 0 }, { 305, 290, 0 },
		{ 355, 225, 0 }, { 415, 320, 0 }, { 475, 285, 0 }, { 510, 360, 0 }, { 545, 310, 0 },
		{ 590, 230, 0 }, { 645, 295, 0 }, { 690, 220, 0 }, { 740, 240, 0 }, { 785, 290, 0 },
		{ 40, 330, 0 }, { 90, 360, 0 }, { 145, 390, 0 }, { 195, 350, 0 }, { 235, 440, 0 },
		{ 270, 400, 0 }, { 335, 400, 0 }, { 380, 365, 0 }, { 440, 440, 0 }, { 485, 410, 0 },
		{ 520, 510, 0 }, { 570, 440, 0 }, { 610, 410, 0 }, { 675, 390, 0 }, { 705, 440, 0 },
		{ 750, 395, 0 }, { 785, 460, 0 }, { 30, 490, 0 }, { 85, 520, 0 }, { 170, 505, 0 },
		{ 220, 530, 0 }, { 300, 510, 0 }, { 345, 490, 0 }, { 430, 545, 0 }, { 495, 560, 0 },
		{ 550, 545, 0 }, { 585, 530, 0 }, { 665, 540, 0 }, { 740, 565, 0 }, { 775, 570, 0 }
	};

	// Draw stars
	for (const auto &star : stars)
	{
		const int sx = star.x;
		const int sy = star.y;

		switch (star.type)
		{
		case 0: // Faint 1px star
			gfx.PutPixel(sx, sy, faintStar);
			break;

		case 1: // Bright 1px star
			gfx.PutPixel(sx, sy, brightStar);
			break;

		case 2: // Small 3x3 sparkle cross
			gfx.PutPixel(sx, sy, sparkleCenter);
			gfx.PutPixel(sx - 1, sy, sparkleArm);
			gfx.PutPixel(sx + 1, sy, sparkleArm);
			gfx.PutPixel(sx, sy - 1, sparkleArm);
			gfx.PutPixel(sx, sy + 1, sparkleArm);
			break;

		case 3: // Large 5x5 diamond sparkle
			gfx.PutPixel(sx, sy, bigSparkleCenter);

			// Inner cross
			gfx.PutPixel(sx - 1, sy, bigSparkleInner);
			gfx.PutPixel(sx + 1, sy, bigSparkleInner);
			gfx.PutPixel(sx, sy - 1, bigSparkleInner);
			gfx.PutPixel(sx, sy + 1, bigSparkleInner);

			// Diagonal glow
			gfx.PutPixel(sx - 1, sy - 1, bigSparkleDiag);
			gfx.PutPixel(sx + 1, sy - 1, bigSparkleDiag);
			gfx.PutPixel(sx - 1, sy + 1, bigSparkleDiag);
			gfx.PutPixel(sx + 1, sy + 1, bigSparkleDiag);

			// Outer tips
			gfx.PutPixel(sx - 2, sy, bigSparkleOuter);
			gfx.PutPixel(sx + 2, sy, bigSparkleOuter);
			gfx.PutPixel(sx, sy - 2, bigSparkleOuter);
			gfx.PutPixel(sx, sy + 2, bigSparkleOuter);
			break;
		}
	}
}
