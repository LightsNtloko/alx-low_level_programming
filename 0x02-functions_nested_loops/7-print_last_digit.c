#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @k: The number to get the last digit from.
 *
 * Return: The value of te last digit.
 */
int print_last_digit(int k)
{
	int last;

	last = k % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
