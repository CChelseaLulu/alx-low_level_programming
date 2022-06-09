#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @b: int
 * description - return 1 if it is upper or lower
 * Return: 1 if alphabet and 0 if otherwise
 */
int _isalpha(int b)
{
	if (b >= 97 && b <= 122)
	{
		return (1);
	}

	else if (b >= 65 && b <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
