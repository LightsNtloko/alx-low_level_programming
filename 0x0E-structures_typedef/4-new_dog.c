#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - The function creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: The pointer to the new dog_t struct, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return NULL;
	}
	strcpy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return NULL;
	}
	strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
