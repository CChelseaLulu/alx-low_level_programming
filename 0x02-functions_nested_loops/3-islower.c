#include "main.h"
#include <stdio.h>

/**
 * _islower : function name
 *
 * @b : variable
 *
 * description : checks if it islower case
 *
 * Return : int
 */

int _islower(int b)
{
	if (b >= 97 && b <= 122)
	{
		return (1);
	}
	else
		return (0);
}
