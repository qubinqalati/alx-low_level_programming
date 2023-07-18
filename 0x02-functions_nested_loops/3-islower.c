#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the chararcter to be checked
 *
 * Return: 1 on success, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
