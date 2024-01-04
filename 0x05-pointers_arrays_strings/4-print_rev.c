#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 * followed by a new line
 * @s: The string to be printed in reverse.
 * Return: 0
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	while (length--)
		_putchar(s[length]);
	_putchar('\n');
}
