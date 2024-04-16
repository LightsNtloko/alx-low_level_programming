#include <stdio.h>

/**
 * int_index - A function that searches for an integer in an array
 * @array: The pointer to the 1st element of the array
 * @size: The number of elements in the array
 * @cmp: The pointer to the function used to compare values in the array
 *
 * Return: The index of the 1st element for which cmp does not return 0,
 * or -1 if there is no element that matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL &&cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
