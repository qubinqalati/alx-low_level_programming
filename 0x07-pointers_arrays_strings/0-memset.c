#include "main.h"

/**
 * _memset - fills memory with constant byte
 *  @s: pointer
 *  @n: number of bytes
 *  @b: constant byte
 *
 *  Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
