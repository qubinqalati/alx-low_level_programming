#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
