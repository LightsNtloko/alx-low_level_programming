#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @l: The number to check.
 *
 * Return: 1 and prints '+' if n is greater than zero,
 * 0 and prints '0' if n is zero,
 * -l and prints '-' if n is less than zero.
 */
int print_sign(int l)
{
	if (l > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (l == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
