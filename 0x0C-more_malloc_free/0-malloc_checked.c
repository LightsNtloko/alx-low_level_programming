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
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}

	return (ptr);
}
