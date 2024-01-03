#include <stdio.h>

/**
 * swap_int - A function that swaps the value of two integers
 * @k: The first integer to be swapped.
 * @n: The second integer to be swapped.
 * Return: nothing
 */
void swap_int(int *k, int *n)
{
	int temp = *k;
	*k = *n;
	*n = temp;
}
