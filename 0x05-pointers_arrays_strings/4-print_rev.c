#include <unistd.h>

/**
 * print_rev - A function that prints a string in reverse using recursion
 * @k: The string should be printed in reverse
 */
void _print_rev(char *k)
{
	if (*k == '\0')
	{
		write(STDOUT_FILENO, "\n", 1);
		return;
	}
	_print_rev(k + 1);
	write(STDOUT_FILENO, k, 1);
}
