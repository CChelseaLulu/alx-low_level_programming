#include "main.h"
#include <stdio.h>

/**
* main - check the code
* prints lowercase alphabet
* c is the variable
* Return: Always 0.
*/
void ft_putchar(char c);

void ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}

