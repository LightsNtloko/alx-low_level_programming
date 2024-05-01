#include "main.h"

/**
 * print_biary - The function that print a binary representation of a number
 * @n: The number to print in binary representation
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int leading_zeros = 1;

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		{
			_putchar ('1');
			leading_zeros = 0;
		}
		else if (!leading_zeros)
		{
			_putchar('0');
		}
		shift--;
	}

	if (leading_zeros)
		_putchar('0');
}
