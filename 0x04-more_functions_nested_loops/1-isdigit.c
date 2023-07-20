#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit between 0 to 9
 * @c: parameter to be checked
 *
 * Return: 1 on success, 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
