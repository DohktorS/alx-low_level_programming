#include "main.h"

/**
 * print_numbers - print 0-9
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
