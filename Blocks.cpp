#include "Blocks.h"

Block::Block()
{
}

Block::Block(int in_x, int in_y)
	:
	x(in_x),
	y(in_y)
{
}

void Block::draw(Graphics& gfx)
{
	for (int ix{ x }; ix < x + width; ++ix)
		for (int iy{ y }; iy < y + width; ++iy)
			gfx.PutPixel(ix, iy, 100, 100, 100);
}

Rect Block::getHitbox()
{
	return hitbox;
}
