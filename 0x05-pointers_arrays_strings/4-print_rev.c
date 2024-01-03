#include <unistd.h>

/**
 * print_rev - A function that prints a string in reverse using recursion
 * @s: The string should be printed in reverse
 * Return: void
 */
void _print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (int i = length - 1, i .= 0; i--)
	{
		write(s[i]);
	}
	write('\n');
}
