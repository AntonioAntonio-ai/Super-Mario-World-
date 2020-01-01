#pragma once
#include "Rect.h"
#include "Graphics.h"

class Block
{
private:
	int x{ 0 };
	int y{ 0 };
	int width{ 32 };
	int id{ 0 };
	Rect hitbox{x, width, y, width};
public:
	Block();
	Block(int in_x, int in_y);
	void draw(Graphics &gfx);
	Rect getHitbox();
};