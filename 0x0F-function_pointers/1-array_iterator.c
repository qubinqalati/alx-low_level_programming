#include "function_pointers.h"

/**
 * array_iterator - a func to execute another func
 * @array: array to execute func
 * @size: size of the array
 * @action: ptr 2 the func 
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
