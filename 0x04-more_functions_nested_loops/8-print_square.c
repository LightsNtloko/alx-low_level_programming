#include "main.h"

/**
 * print_squre - print a squre in the terminal
 * @size: size of a squre
 */
void print_squre(int area)
{
	if (area > 0)
	{
		int k, n;

		for (k = 0; k < area; k++)
		{
			for (n = 0; n < area; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
