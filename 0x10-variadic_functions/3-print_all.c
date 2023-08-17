#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints args of different datatypes
 * @format: specifies the necessary operations
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int x, num;
	char *ptr;
	va_list args;

	va_start(args, format);
	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				num = 0;
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				num = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				num = 0;
				break;
			case 's':
				ptr = va_arg(args, char*);
				if (ptr == NULL)
				{
					ptr = "(nil)";
				}
				printf("%s", ptr);
				num = 0;
				break;
			default:
				num = 1;
				break;
		}
		if (format[x + 1] != '\0' && num == 0)
			printf(", ");
		x++;
	}
	putchar('\n');
}
