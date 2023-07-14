#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
		putchar('0' + num);
	putchar('\n');
	return (0);
}
