#include "main.h"
#include <stdlib.h>

/**
 * _memset - The function fills the first n bytes of memory area pointed to by
 * k with the constant byte b
 * @k: The pointer to the memory area
 * @b: The byte to fill e memory area with
 * @n: The number of bytes to fill
 *
 * Return: The pointer to the memory area k
 */
void *_memset(void *k, int b, unsigned int n)
{
	unsigned char *ptr = k;
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = (unsigned char)b;

	return (k);
}
/**
 * _calloc - The function tha allocates memory for an array, using malloc
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 *
 * Return: The pointet to the allocated memory, or NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int overall_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	overall_size = nmemb * size;

	ptr = malloc(overall_size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, overall_size);

	return (ptr);
}
