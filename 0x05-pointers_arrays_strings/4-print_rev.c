#include "main.h"

/**
 * print_rev - A function that prints a string in reverse using recursion
 * @s: The string should be printed in reverse
 * Return: 0
 */
void _print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		write(STDOUT_FILENO, s, 1);
		s--;
	}
	write(STDOUT_FILENO, "\n", 1);
}
