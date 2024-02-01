#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars, and
 * initializes it with a specific char.
 * @magnitude: The magnitude of the array
 * @k: The char to fill in the array
 *
 * Return: The array to be filled with char
 */
char *create_array(unsigned int size, char k)
{
	unsigned int n;
	char *m;

	if (size == 0)
		return (NULL);

	m = malloc(size * sizeof(char));

	if (m == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
	{
		m[n] = k;
	}

	return (m);
}
