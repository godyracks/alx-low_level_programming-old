#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * in lowercase
 */
void print_alphabet_x10(void)
{
	char abc;
	int i;

	i = 0;

	while (1 < 10)
	{
		abc = 'a';
		while (abc <= 'z')
		{
			_putchar(abc);
			abc++;
		}
		_putchar('\n');
		i++;
	}
}
