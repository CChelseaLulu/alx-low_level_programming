#include "main.h"
#include <stdio.h>

/**
* print the alphabet in lower case
*
* Return: Always 0 (Success)
*
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
