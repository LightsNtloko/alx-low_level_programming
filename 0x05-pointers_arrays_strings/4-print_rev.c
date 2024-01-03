#include <unistd.h>

/**
 * print_rev - A function that prints a string in reverse using recursion
 * @s: The string should be printed in reverse
 * Return: void
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
	for (i = length, i > 0; i--)
	{
		write(*s);
		s--;
	}
	write('\n');
}
