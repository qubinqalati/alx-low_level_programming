#include "main.h"

/**
 * more_numbers - prints ten times the numbers
 *
 * Return: NULL
 */

void more_numbers(void)
{
	int num, digi;

	for (num = 0; num <= 10; num++)
	{
		for (digi = 0; digi <= 14; digi++)
		{
			if (digi >= 10)
				_putchar('1');
			_putchar(digi % 10 + '0');
		}
		_putchar('\n');
	}
}
