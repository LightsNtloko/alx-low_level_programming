#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - The function allocates memory using malloc
 * @b: The size of the memory to be allocated
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);
	return (pointer);
}
