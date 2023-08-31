#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - converts binary 2 decimal
 * @b: ptr
 *
 * Return: converted num, 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y;

	y = 0;
	if (!b)
	{
		return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		y <<= 1;
		if (b[x] == '1')
		{
			y += 1;
		}
	}
	return (y);
}
