#include "main.h"

/**
 * _puts - A function that prints a string
 * @k: The string is printed
 * Return: void
 */
void _puts(char *k)
{
	for (; *k != '\0'; k++)
	{
		_putchar(*k);
	}
	_putchar('\n');
}
