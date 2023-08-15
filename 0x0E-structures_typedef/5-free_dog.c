#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - uses dynamic mem func free() 2 free the
 * mem
 * @d: ptr 2 the datatype 2 b freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
