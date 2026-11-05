/******************************************************************************************
 *	Chili DirectX Framework Version 16.07.20											  *
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"
#include "SpriteCodex.h"

Game::Game(MainWindow &wnd)
	: wnd(wnd),
	  gfx(wnd),
	  ball(Vec2(395.0f, 495.0f)),
	  paddle(Vec2(350.0f, 500.0f))
{
	const int nBricksRow = 10;
	const int nBricksCol = 7;
	const float brickWidth = 70.0f;
	const float brickHeight = 25.0f;
	const Vec2 startpos(45.0f, 10.0f);

	const Color colColors[] = {
		Colors::MakeRGB(115, 65, 245),
		Colors::MakeRGB(125, 120, 255),
		Colors::MakeRGB(235, 75, 215),
		Colors::MakeRGB(245, 130, 245),
		Colors::MakeRGB(255, 160, 220),
		Colors::MakeRGB(255, 185, 175),
		Colors::MakeRGB(255, 210, 160)};

	for (int j = 0; j < nBricksCol; ++j)
	{
		for (int i = 0; i < nBricksRow; ++i)
		{
			const Vec2 pos(startpos.x + i * brickWidth + 2.0f, startpos.y + j * brickHeight + 2.0f);
			bricks.emplace_back(pos, colColors[j]);
		}
	}
}

void Game::Go()
{
	gfx.BeginFrame();
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		paddle.Move(-3.0f);
	}
	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		paddle.Move(3.0f);
	}
	if (paddle.GetRect().left < 0.0f)
	{
		paddle.SetTopLeft(Vec2(0.0f, paddle.GetRect().top));
	}
	if (paddle.GetRect().right >= gfx.ScreenWidth)
	{
		paddle.SetTopLeft(Vec2(gfx.ScreenWidth - paddle.GetWidth() - 1, paddle.GetRect().top));
	}

	if (BallisAttached)
	{
		const float PaddleCenterX = paddle.GetRect().left + (paddle.GetWidth() / 2.0f);
		const float BallY = paddle.GetRect().top - ball.GetRadius();

		ball.SetCenter(Vec2(PaddleCenterX, BallY));
		if (wnd.kbd.KeyIsPressed(VK_UP))
		{
			ball.Setdir(Vec2(1.0f, -1.0f));
			BallisAttached = false;
		}
	}
	else
	{
		ball.Update();
		if (ball.GetRect().top <= 0.5f || ball.GetRect().bottom >= gfx.ScreenHeight - 0.5f)
		{
			ball.ReflectBallY();
		}
		if (ball.GetRect().left <= 2.0f || ball.GetRect().right >= gfx.ScreenWidth - 0.5f)
		{
			ball.ReflectBallX();
		}

		if (ball.GetVelocity().y > 0.0f && ball.GetRect().IsOverLapping(paddle.GetRect()))
		{
			ball.ReflectBallY();
			padSound.Play();
		}
	}

	for (auto &brick : bricks)
	{
		if (!brick.isDestroyed && ball.GetRect().IsOverLapping(brick.GetRect()))
		{
			brick.isDestroyed = true;
			ball.ReflectBallY();
			brickSound.Play();
			break;
		}
	}
}

void Game::ComposeFrame()
{
	SpriteCodex::DrawBackground(gfx);

	for (const auto &brick : bricks)
	{
		if (!brick.isDestroyed)
		{
			brick.Draw(gfx);
		}
	}

	ball.Draw(gfx);
	paddle.Draw(gfx);
}
