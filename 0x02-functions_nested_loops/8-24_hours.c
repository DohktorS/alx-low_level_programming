#include "main.h"

/**
 *jack_bauer - Federal agent Jack
 * Return: 0
 */

void jack_bauer(void)
{
	int F, s;

	for (F = 0; F <= 23; F++)
	{
		for (s = 0; s <= 59; s++)
		{
			_putchar((F / 10) + '0');
			_putchar((F % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
		}
	}
}
