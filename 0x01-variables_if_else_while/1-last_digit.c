#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int n, LastDigit;

	scanf("%d", &Number);

	LastDigit = Number % 10;
	if (LastDigit > 5)
	{
		printf("Lastdigit of %d =  %d" n "is"  LastDigit "and is greater than 5")
	}
	else if (n == 0)
	{
		printf("Last digit of %d = %d" n "is" LastDigit "and is zero")
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d = %d" n "is" LastDigit "and is less than 6 and not 0")
	}
	return (0);
}
