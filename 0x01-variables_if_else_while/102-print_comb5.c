#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int digi, num;

	for (digi = 0; digi <= 99; digi++)
	{
		for (num = digi + 1; num <= 99; num++)
		{
			putchar((digi / 10) + '0');
			putchar((digi % 10) + '0');
			putchar(' ');
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');

			if (digi < 98 || num < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
