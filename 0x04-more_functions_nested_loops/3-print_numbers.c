#include "main.h"

/**
 * print_numbers - prints the number from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	char k;

	k = '0';

	while (k <= '10')
	{
		_putchar(k);
		k++;
	}
	_putchar('\n');
}
