#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - The function allocates memory using malloc
 * @b: The size of the memory to be allocated
 * Return: A pointer to the allocated memory
 * if malloc fails, the function terminates the process with status 98.
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
