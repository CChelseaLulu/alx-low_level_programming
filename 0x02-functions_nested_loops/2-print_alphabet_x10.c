#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - function name
 * declaration - print out alphabet 10 times
 *
 * Return : void
 *
 */

void print_alphabet_x10(void)

{
	int alphabet;
	int c;

	for (c = 1; c <= 10; c++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
