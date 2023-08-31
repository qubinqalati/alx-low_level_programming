#include "main.h"

/**
 * flip_bits - lorem
 * @n: lorem
 * @m: lorem
 *
 * Return: ...
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif, res;
	unsigned int x, y;

	x = 0;
	res = 1;
	dif = n ^ m;
	for (y = 0; y < (sizeof(unsigned long int) * 8); y++)
	{
		if (res == (dif & res))
			x++;
		res <<= 1;
	}
	return (x);
}
