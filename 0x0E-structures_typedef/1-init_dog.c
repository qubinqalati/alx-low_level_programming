#include "dog.h"

/**
 * init_dog - init a struct
 * @d: ptr 2 struct
 * @name: 1st datatype
 * @owner: 2nd datatype
 * @age: 3rd datatype
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
