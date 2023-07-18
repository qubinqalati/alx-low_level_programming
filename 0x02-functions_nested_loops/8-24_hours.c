#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: NULL
 */

void jack_bauer(void)
{
	int num, digi;

	for (num = 0; num <= 23; num++)
	{
		for (digi = 0; digi <= 59; digi++)
		{
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			_putchar(':');
			_putchar((digi / 10) + '0');
			_putchar((digi % 10) + '0');
			_putchar('\n');
		}
	}
}
