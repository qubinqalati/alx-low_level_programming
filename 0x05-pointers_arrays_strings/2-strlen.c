#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: parameter that points to the string
 *
 * Return: _strlen
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;

	return (a);
}
