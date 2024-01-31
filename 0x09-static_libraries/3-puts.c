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
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
