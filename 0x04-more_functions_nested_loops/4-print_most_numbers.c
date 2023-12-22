#include "main.h"

/**
 * print_most_numbers - print 0 to 9excluding 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int k;

	for (k = 0; k < 10, k++)
	{
		if (k != 2 && k != 4)
			
			_putchar(k);
	}
	_putchar("\n");
}
