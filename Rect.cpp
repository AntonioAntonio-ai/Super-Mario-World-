#include "Rect.h"

Rect::Rect()
{
}

Rect::Rect(int in_up, int in_down, int in_left, int in_right)
	:
	up(in_up),
	down(in_down),
	left(in_left),
	right(in_right)
{
}

bool Rect::isColliding(Rect& other)
{
	if (right >= other.left &&
		left <= other.right &&
		down >= other.up &&
		up <= other.down)
		return true;
}