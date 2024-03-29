#include "main.h"
#include <stdlib.h>

/**
 * _realloc - The function reallocates a memory block using mallloc and free
 * @ptr: The pointer to the memory previously alocated with malloc(old_size)
 * @old_size: The size in bytes, of the allocated space for ptr
 * @new_size: The size in bytes, of the new memory block
 * Return: The pointer to the newly reallocated memory block, NULL if new_size
 * is 0 and ptr is not NULL, NULL if malloc fails, ptr if new_ize == old_size,
 * or pointer to the newly allocated memory block if ptr is NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned minimum_size;
	unsigned int k;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	minimum_size = old_size < new_size ? old_size : new_size;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	for (k = 0; k < minimum_size; k++)
		((char *)new_ptr)[k] = ((char *)ptr)[k];

	free(ptr);

	return (new_ptr);
}
