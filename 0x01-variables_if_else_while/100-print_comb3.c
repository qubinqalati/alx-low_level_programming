#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int digi1, digi2;

	for (digi1 = 0; digi1 <= 9; digi1++)
	{
		for (digi2 = digi1 + 1; digi2 <= 9; digi2++)
		{
			putchar('0' + digi1);
			putchar('0' + digi2);

			if (digi1 < 8 || digi2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
