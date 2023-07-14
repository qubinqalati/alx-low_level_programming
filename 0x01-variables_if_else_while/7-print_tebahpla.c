#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	char alpha = 'a';

	for (alpha = (stringlen(alpha)-1); 'a'; alpha <= 'z'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
