#pragma once

class Rect
{
private:
	int up;
	int down;
	int left;
	int right;
public:
	Rect();
	Rect(int in_up, int in_down, int in_left, int in_right);
	bool isColliding(Rect &other);
};