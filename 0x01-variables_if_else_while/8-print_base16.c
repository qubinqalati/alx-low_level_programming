#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int num = 0;

	for (num = 0; num <= 15; num++)
		putchar('x' + num);
	putchar('\n');
	return (0);
}
