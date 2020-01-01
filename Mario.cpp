#include "Mario.h"

Mario::Mario()
{
}

Mario::Mario(int in_x, int in_y)
	:
	x(in_x),
	y(in_y)
{
}

void Mario::update(MainWindow& wnd, Block& block)
{
	if (wnd.kbd.KeyIsPressed(VK_UP))
		vy = -3;
	if (wnd.kbd.KeyIsPressed(VK_DOWN))
		vy = 3;
	if (wnd.kbd.KeyIsPressed(VK_LEFT))
		vx = -3;
	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
		vx = 3;

	if (hitbox.isColliding(block.getHitbox()))
	{

	}

	x += vx;
	y += vy;

	vx = 0;
	vy = 0;
}

void Mario::draw(Graphics& gfx)
{
	for (int ix{ x }; ix < x + width; ++ix)
		for (int iy{ y }; iy < y + height; ++iy)
			gfx.PutPixel(ix, iy, 100, 0, 0);
}
