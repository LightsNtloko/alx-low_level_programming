#include "main.h"

/**
 * print_diagonal - print diagonal line in the terminal
 * @k: number of time the character \ should be printed
 */
void print_diagonal(int k)
{
	if (k > 0)
	{
		int l, n;

		for (l = 0; l < k; l++)
		{
			for (n = 0; n < l; n++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
