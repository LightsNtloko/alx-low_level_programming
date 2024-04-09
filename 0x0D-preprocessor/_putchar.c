#include <unistd.h>

/**
 * _putchar - A fuction that writes a character to the standard output (stdout)
 * @k: The character to be written
 *
 * Return: On success 1,
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char k)
{
	return write(1, &k, 1);
}
