#include "mul.h"
#include "add.h"

int abs(int x)
{
	if (x < 0)
	{
		return -x;
	}
	return x;
}

int mul(int x, int y)
{
	bool minus = false;
	int result = 0;
	if ((x < 0) ^ (y < 0))
	{
		minus = true;
	}
	x = abs(x);
	y = abs(y);

	for (int i = 0; i < x; i++)
	{
		result = add(result, y);
	}

	if (minus)
	{
		return -result;
	}
	else
	{
		return result;
	}
}