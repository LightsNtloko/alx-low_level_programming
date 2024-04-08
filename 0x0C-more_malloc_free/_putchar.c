#include <unistd.h>

/**
 * _putchar - The function that writes the character k to a stdout
 * @k: The character to be printed
 * Return: On success 1, otherwise -1
 */
int _putchar(char k)
{
	return (write(1, &k, 1));
}
