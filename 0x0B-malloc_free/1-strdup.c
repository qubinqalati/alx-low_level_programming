#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which,
 * is a duplicate of the string str.
 * @str: the source string
 *
 * Return: return a pointer to the duplicated string.
 * It returns NULL if insuffient memory was available
 */

char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
