#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i, digi, num;

	for (i = '0'; i <= '9'; i++)
	{
		for (digi = i + 1; digi <= '9'; digi++)
		{
			for (num = digi + 1; num <= '9'; num++)
			{
				putchar(i);
				putchar(digi);
				putchar(num);

				if (i < '7' || digi < '8' || num < '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
