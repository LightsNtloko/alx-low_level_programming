#include "main.h"

/**
 * more_numbers - Functions that prints 10 times the number, from 0 to 14
 * followed by a new line
 */
int more_numbers(void)
{
	int k, n;

	for (k = 0; k < 10; k++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
			{
				_putchar('0' + n / 10);
			}
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}
