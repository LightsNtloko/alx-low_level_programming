#include <stdio.h>
#include "dog.h"

/**
 * print_dog - The function Prints a struct dog
 * @d: The ointer to the struct dog variable to be printed
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
