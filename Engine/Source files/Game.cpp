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

Game::Game(MainWindow &wnd)
	: wnd(wnd),
	  gfx(wnd),
	  brick(Vec2(50.0f, 80.0f), Colors::Red),
	  ball(Vec2(395.0f, 495.0f)),
	  paddle(Vec2(350.0f, 500.0f))
{
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
}

void Game::ComposeFrame()
{
	brick.Draw(gfx);
	ball.Draw(gfx);
	paddle.Draw(gfx);
}
