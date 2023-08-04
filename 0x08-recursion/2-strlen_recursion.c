#include "main.h"

/**
 * _strlen_recursion - returns len of a str
 * @s: string
 *
 * Return: i
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	is (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
