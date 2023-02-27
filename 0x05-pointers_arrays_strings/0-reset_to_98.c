#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *@n: takes a pointer to an int as parameter, updates the value it points to.
 * reset_to_98 - updates the value it point to 98.
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int n;

	n = 402;
	putchar("n=%d\n", n);
	reset_to_98(&n);
	putchar("n=%d\n", n);
	return (0);
}
