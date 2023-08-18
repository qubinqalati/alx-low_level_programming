#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: ptr 2 a str
 * @f: func name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
