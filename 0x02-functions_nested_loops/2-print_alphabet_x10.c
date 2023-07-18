#include "main.h"

/**
 * print_alphabet_x10 - a function that print 10 times the alphabet
 *
 * Return: NULL
 */

void print_alphabet_x10(void)
{
	char alpha;
	int num = 10;

	while ( num > 0 )
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
		num--;
	}
}
