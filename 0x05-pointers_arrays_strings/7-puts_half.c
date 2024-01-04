#include "main.h"

/**
 * puts_half - A function that prints half of a string
 * followed by a new line.
 * @k: The input string
 */
void puts_half(char *k)
{
	int distance = 0;
	int initial;

	while (k[distance] != '\0')
		distance++;

	initial = distance / 2;

	while (k[initial] != '\0')
	{
		_putchar(k[initial]);
		initial++;
	}

	_putchar('\n');
}
