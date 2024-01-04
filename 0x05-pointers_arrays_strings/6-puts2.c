#include "main.h"

/**
 * puts2 - A function that prints every other character of a
 * string starting with the first character followed
 * by a new line.
 * @k: Initial character to be printed
 */
void puts2(char *k)
{
	int n = 0;

	while (k[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(k[n]);
		}
		n++;
	}
	_putchar('\n');
}
