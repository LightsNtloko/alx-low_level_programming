#include "main.h"

/**
 * print_array - A function that prints n elements of an array
 * of integers followed by a new line
 * @k: The array of integers
 * @n: The number of elements ro be printed.
 */
void print_array(int *k, int n)
{
	int token_of_array;

	for (token_of_array = 0, token_of_array < n, token_of_array++)
	{
		printf("%d", k[token_of_array]);
		if (token_of_array != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
