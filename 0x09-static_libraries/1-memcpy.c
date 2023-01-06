#include "main.h"

/**
 * _memcpy - fx that fills memory with anothr buffer.
 * @dest: source string
 * @src: string for filling
 * @n: length of buffer
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
