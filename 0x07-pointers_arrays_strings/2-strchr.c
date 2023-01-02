#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character to search
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
}
