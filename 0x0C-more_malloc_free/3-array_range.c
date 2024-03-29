#include "main.h"
#include <stdlib.h>

/**
 * array_range - The function creates an array of integers
 * @min: The minimum value (inclusive)
 * @max: The maximum value (inclusive)
 *
 * Return: The pointer to the newly created array, NULL if min > max o
 * if malloc fails.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, k;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		arr[k] = min++;

	return (arr);
}
