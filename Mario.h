#pragma once
#include "Rect.h"
#include "MainWindow.h"
#include "Keyboard.h"
#include "Blocks.h"

class Mario
{
private:
	int x{ 0 };
	int y{ 0 };
	int vx{ 0 };
	int vy{ 0 };
	int height{ 32 };
	int width{ 32 };
	Rect hitbox{x, x+width, y, y+height};
	bool isLuigi{ 0 };
	bool yoshi{ 0 };
	bool star{ 0 };
	int pSpeed{ 0 };
	enum class State
	{
		STATE_OVERWORLD,
		STATE_CUTSCENE,
		STATE_NORMAL,
		STATE_JUMP,
		STATE_FALL,
		STATE_SPINJUMP,
		STATE_SPINFALL,
		STATE_SWIM,
		STATE_CLOUD
	};
	enum class Power
	{
		POWER_SMALL,
		POWER_BIG,
		POWER_FIRE,
		POWER_CAPE,
		POWER_BAT,
		POWER_WARIO,
		POWER_SHELL,
		POWER_DISCOSHELL
	};
public:
	Mario();
	Mario(int in_x, int in_y);
	void update(MainWindow& wnd, Block& block);
	void draw(Graphics& gfx);
};