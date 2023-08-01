#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet from 'a' to 'z'
 *
 * Description: This function uses a loop to iterate through the lowercase
 * alphabet and prints each character using the _putchar function.
 *
 * Return (void)
 */

void print_alphabet(void)
{
	char k;

	k = 'a';

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
