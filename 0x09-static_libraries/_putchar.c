#include <unistd.h>
#include "main.h"

/**
 * _putchar - Execute the character n to stdout
 * @n: The character to print
 *
 * Return: Always 0 (Success)
 * When on error, return to -1, and error is set appropriately
 */

int _putchar(char n)
{
	return write(1, &n, 1);
}
