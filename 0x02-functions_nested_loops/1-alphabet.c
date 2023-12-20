#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet from 'a' to 'z'
 *
 * Description: This function uses a loop to iterate through lowercase alphabet and prints each character using the _putchar function.
 *
 * Return (void)
 */

void print_alphabet(void)
{
	char l;

	l = 'a';

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
