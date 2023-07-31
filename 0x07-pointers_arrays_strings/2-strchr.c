#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a char in a str
 * @s: the string 2 b searched
 * @c: char 2 search 4
 *
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
