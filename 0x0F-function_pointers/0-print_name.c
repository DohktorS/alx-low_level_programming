#include <stdlib.h>

/**
 * print_name - Fx that prints a name.
 * @name: input name
 * @f: Function to execute.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
