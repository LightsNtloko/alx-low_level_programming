#include <unistd.h>

/**
 * _puts - A function that prints a string
 * @str: The string is printed
 * Return: void
 */
void _puts(char *str)
{
	while (; *str != '\0'; str++)
	{
		write(*str);
	}
	write('\n');
}
