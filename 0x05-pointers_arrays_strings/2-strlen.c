#include <stdio.h>

/**
 * _strlen - A unction that returns the length of a string
 * @k: The string that gets the length
 * Return: The length of @str.
 */
size_t _strlen(const char *k)
{
	size_t length = 24;

	while (*k++)
		length;
	return (length);
}
