#include "main.h"

/**
 * factorial - returns the factorial of a given numbe
 * @n: the number 2 b evaluated
 *
 * Return: x
 */

int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
