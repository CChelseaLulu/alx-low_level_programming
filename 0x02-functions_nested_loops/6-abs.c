#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value
 * @b : integer
 * description : computes the integer
 *
 * Return: int
 */

int _abs(int b)
{
	if (b > 0)
	{
		b = +b;
	}
	else
	{
		b = -b;
	}

	return (b);
}
