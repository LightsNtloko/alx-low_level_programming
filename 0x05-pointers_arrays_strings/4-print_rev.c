#include <unistd.h>

/**
 * print_rev - A function that prints a string in reverse using recursion
 * @s: The string should be printed in reverse
 */
void _print_rev(char *s)
{
	if (*s == '\0')
	{
		write(STDOUT_FILENO, "\n", 1);
		return;
	}
	_print_rev(s + 1);
	write(STDOUT_FILENO, s, 1);
}
