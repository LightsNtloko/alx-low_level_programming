#include <stdio.h>

/**
 * array_iterator - The function that executes a function given as a parameter
 * on each element of an array.
 * @array: The pointer to the 1st element of the array
 * @size: The number of elements in the array
 * @action: The pointer to the function that must be executed on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
