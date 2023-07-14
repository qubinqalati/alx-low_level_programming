#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');
	return (0);
}
