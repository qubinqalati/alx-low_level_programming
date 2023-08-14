#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic structure
 * @name: First member
 * @owner: Second member
 * @age: Third member
 *
 * Description: a struct with 3 datatypes
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
