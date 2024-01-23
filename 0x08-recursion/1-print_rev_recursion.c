#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse
 * @kay: The string to reverse
 *
 */
void _print_rev_recursion(char *kay)
{
	if (*kay == '\0')
	{
		return;
	}

	kay++;
	_print_rev_recursion(kay);
	_putchar(*kay);
}
