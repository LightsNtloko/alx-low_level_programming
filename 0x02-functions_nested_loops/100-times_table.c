#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @l: The number to start printing from
 */
void print_times_table(int l)
{
	int digit, mult, output;

	if (l <= 15 && l >= 0)
	{
		for (digit = 0; digit <= l; digit++)
		{
			_putchar('0');
				for (mult = 0; mult <= 9; mult++)
				{
					_putchar(',');
					_putchar(' ');
					output = digit * mult;
					if (output <= 99)
						_putchar(' ');
					if (output <= 9)
						_putchar(' ');
					if (output >= 100)
					{
						_putchar((output /100) + '0');
						_putchar(((output / 10) % 10) + '0');
					}
					else if (output <= 99 && output >= 10)
					{
						_putchar((output / 10) + '0');
					}
					else
					{
						_putchar(' ');
					}
				}
				_putchar('\n');
		}
	}
}
