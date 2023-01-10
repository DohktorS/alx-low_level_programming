#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Fx that returns a pointer to a newly allocated.
 * space in memory which contains a copy of the string
 * passed.
 * @str: pointer to string being duplicated.
 * Return: NULL if str is NULL
 * pointer to duplicated string on success.
 * NULL if memory was insufficient.
 */

char *_strdup(char *str)
{
	char *sd;
	unsigned int size = 0, i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		size++;
	sd = malloc(sizeof(char) * (size + 1));
	if (sd == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		sd[i] = str[i];
	sd[size] = '\0';
	return (sd);
}
