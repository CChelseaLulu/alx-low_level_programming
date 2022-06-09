#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit
 * @b: integer
 *
 * description: prints put the last digit of the value
 * Return: b
 */

int print_last_digit(int b)
{
	if (b < 0)
	{
		b = -(b % 10);
	}
	else if (b > 0)
	{
		b = b % 10;
	}
	else
	{
		b = 0;
	}

	_putchar(b + '0');

	return (b);
}
