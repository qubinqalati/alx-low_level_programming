#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints str passed to a func
 * @separator:variable 2 separate strs
 * @n: num of para
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *ch;
	unsigned int num;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (num = 0; num < n; num++)
	{
		ch = va_arg(args, char*);
		if (ch == NULL)
		{
			ch = "(nil)";
		}
		printf("%s", ch);
		if (num < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	putchar('\n');
}
