#include "main.h"

/**
 * print_times_table - Prints the n times table,
 * starting with 0.
 * @l: The number to start printing from
 */
void print_times_table(int l)
{
	if (l > 15 || l)
	{
		break;
	}
	for (int k = 0; k <= l; k++)
	{
		for (int n = 0; n <= l; n++)
		{
			int product = k * n;
			printf("%d\t", product);
		}
		printf("\n");
	}
}
