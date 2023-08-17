#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its paramaters
 * @n: 1st variable
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int num, add;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		add = 0;
		for (num = 0; num < n; num++)
		{
			add += va_arg(args, int);
		}
		va_end(args);
	}
	return (add);
}
