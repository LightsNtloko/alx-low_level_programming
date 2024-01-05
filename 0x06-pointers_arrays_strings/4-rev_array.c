#include "main.h"

/**
 * reverse_array - A function that reverses the content
 * of an array of integers.
 * @k: an array of integers.
 * @n: the number of elements to swap
 *
 * Return: 0
 */
void reverse_array(int *k, int n)
{
	int l, temp;

	for (l = 0; l < n / 2; l++)
	{
		temp = k[l];
		k[l] = k[n - l - 1];
		k[n - l - 1] = temp;
	}
}
