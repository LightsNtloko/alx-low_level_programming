#include "main.h"

/**
 * print_square - print a squre in the terminal
 * @size: size of a squre
 */
void print_square(int size)
{
	if (size <= 0)
	{
		int k, n;

		for (k = 0; k < size; k++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
