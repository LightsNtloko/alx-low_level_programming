#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @k: The number to get the last digit from.
 *
 * Return: The value of te last digit.
 */
int print_last_digit(int k)
{
	int last_digit = k % 10;
	_putchar('0' + last_digit);
	return last_digit;
}
