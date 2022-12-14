#include "main.h"

/**
 * print_alphabet_x10 - 10 x alphabet
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int s;
	int o;

	for (o = 0; o < 10; o++)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}

	_putchar('\n');
	}
}
