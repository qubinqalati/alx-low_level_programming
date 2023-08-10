#include "main.h"

/**
 * malloc_checked - allocates mem using malloc
 * @b: 1st num
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
