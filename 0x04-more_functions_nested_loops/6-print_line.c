#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @k: number of times the character _ should be printed
 */

void print_line(int k)
{
	if (k > 0)
	{
		int n;

		for (n = 0; n < k; n++)
		{
			_putchar('_')
		}
	}
	_putchar('\n');
}
