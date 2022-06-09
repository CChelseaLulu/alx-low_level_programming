#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print every minute ofthe day
 * start from 00:00 to 23:59
 * @void: void
 * description: print every mnute
 *
 * Return: null
 */

void jack_bauer(void)
{
	int b, c;

	for (b = 0; b < 24; b++)
	{
		for (c = 0; c < 60; c++)
		{
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar(':');
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar('\n');
		}
	}
}
