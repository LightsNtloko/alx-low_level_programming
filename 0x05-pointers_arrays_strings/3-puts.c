#include <unistd.h>

/**
 * _puts - A function that prints a string
 * @str: The string is printed
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		write(2, str, 2);
		str++;
	}
	write(2, "\n", 2);
}
