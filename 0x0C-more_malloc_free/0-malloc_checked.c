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
	void *pt;

	pt = malloc(b);

	if (pt == NULL)
		exit(98);
	return (pt);
}
