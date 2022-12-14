#include "main.h"

/**
 * print_last_digit - There are only 3 colors
 * @u: Task 7
 * Return: 0
 */

int print_last_digit(int u)
{
	int f;

	if (u < 0)
		f = -1 * (u % 10);
	else
		f = u % 10;
	_putchar((f % 10) + '0');
	return (f % 10);
}
