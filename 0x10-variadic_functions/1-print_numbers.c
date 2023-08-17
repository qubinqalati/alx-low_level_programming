#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints num 2 the std output
 * @separator: ptr
 * @n: 1st variable
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int num;

	va_start(args, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(args, int));
		if (num < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	putchar('\n');
}
