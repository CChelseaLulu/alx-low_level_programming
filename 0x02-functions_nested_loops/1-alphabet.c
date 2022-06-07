#include "main.h"
#include <stdio.h>

/**
* main - check the code
* prints lowercase alphabet
* Return: Always 0.
*/

int main(void)
{
	for (int y = 'a'; y <= 'z'; y++)
	{
		y = tolower(y);
		putchar(y);
	}
	return (0);
}
