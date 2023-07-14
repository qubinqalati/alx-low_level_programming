#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	char alpha = 'z';

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
