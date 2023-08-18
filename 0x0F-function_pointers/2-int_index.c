#include "function_pointers.h"

/**
 * int_index - lorem ipsum
 * @array: lorem ipsum
 * @size: lorem ipsum
 * @cmp: lorem ipsum
 *
 * Return: void
 */

int int_index(int *array int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
				{
					return (x);
				}
				x++;
			}
		}
	}
	return (-1);
}
