#include "main.h"

/**
 * _isalpha  - checks if a chararcter is alphabetic
 * @c: the character to be
 *
 * Return: 1 on success, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
