#include <unistd.h>
#include "main.h"

/**
 * _putchar - Execute the character k to stdout
 * @k: The character to print
 *
 * Return: Always 0 (Success)
 * When on error, return to -1, and error is set appropreately
 */

int _putchar(char k)
{
	return write(1, &k, 1);
}
