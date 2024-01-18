#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @kay: The string to be printed
 *
 */
void _puts_recursion(char *kay)
{
	if (*kay == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*kay);
	kay++;
	_puts_recursion(kay);
}
