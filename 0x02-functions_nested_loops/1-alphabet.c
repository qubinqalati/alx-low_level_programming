#include "main.h"

/**
 * print_alphabet - prints letters in lowercase
 *
 * Return: NULL
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
