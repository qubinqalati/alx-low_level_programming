#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: parameter to be checked
 *
 * Return: 1 on success, 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
