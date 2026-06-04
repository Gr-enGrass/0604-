#include "dive.h"

int dive(int x, int y)
{
	if (x > 0 && y > 0) {
		if (x > y) {
			return x / y;
		}
		return y / x;
	}
	else if (x < 0 && y < 0) {
		int X, Y;
		X = (-1) * x;
		Y = (-1) * y;
		if (X > Y) {
			x = X;
			y = Y;
			return x / y;
		}
		x = X;
		y = Y;
		return y / x;
	}
	else
	{
		int X, Y;
		X = (-1) * x;
		Y = (-1) * y;
		if (X > Y) {
			x = X;
			y = Y;
			return (x / y)*(-1);
		}
		x = X;
		y = Y;
		return (y / x)*(-1);
	}
}
