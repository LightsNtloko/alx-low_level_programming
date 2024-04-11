#include "dog.h"
#include <stddef.h>

/**
 * init_dog - The programme initializes a variable of type struct dog
 * @d: The pointer to the struct dog variable to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
