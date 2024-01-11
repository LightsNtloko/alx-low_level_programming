#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int k, total1 = 0, total2 = 0;

	for (k = 0; k < size; k++)
	{
		total1 += *(a + k * size + k);
	}

	for (k = 0; k < size; k++)
	{
		total2 += *(a + k * size + (size - 1 - k));
	}

	printf("%d, %d\n", total1, total2);
}
