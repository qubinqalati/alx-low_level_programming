#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, d;

	for (a = 0; dest[a] != '\0'; a++)
	{
		continue;
	}
	for (d = 0, src[d] != '\0' && d < n; d++)
	{
		dest[a + d] = src[d];
	}
	dest[a + d] = '\0';
	return (dest);
}
