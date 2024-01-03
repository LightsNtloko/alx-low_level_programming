#include <stdio.h>

/**
 * _puts - A function that prints a string
 * @str: The string is printed
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		printf(*str);
	}
	printf('\n');
}
