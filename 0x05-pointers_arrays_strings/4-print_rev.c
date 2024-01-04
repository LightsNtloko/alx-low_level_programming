#include "main.h"

/**
 * print_rev - A function that prints a string in reverse followed by a new line
 * @s: The string to be printed in reverse.
 * Return: 0
 */
void print_rev(char *s)
{
	int distance = 0;
	while (s[distance] != '\0')
	{
		distance++;
	}

	for (int i = distance - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
