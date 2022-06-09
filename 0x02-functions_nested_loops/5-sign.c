#include <stdio.h>
#include "main.h"

/**
 * print_sign - print sign of n
 * @b: int
 * description : return the sign according to the condition
 *
 * Return: + if positive, 0 if zero and - if negative
 */

int print_sign(int b)

{
	if (b > 0)
	{
		_putchar ('+');
		return (1);

	}
	else if (b < 0)

	{
		_putchar ('-');
		return (-1);
	}

	else
	{
		_putchar ('0');

		return (0);
	}
}
