#include <stdio.h>

/**
 * _strlen - A unction that returns the length of a string
 * @str: The string that gets the length
 * Return: The length of @str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
