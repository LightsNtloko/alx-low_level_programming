#include "main.h"

/**
 * print_most_numbers - print 0 to 9 excluding 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
		if (k != 50)
		{
			if (k != 52)
			{
				_putchar(k);
			}
		}
	}
	_putchar(char);
}
