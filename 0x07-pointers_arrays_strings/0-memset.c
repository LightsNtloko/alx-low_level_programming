#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: The pointed destination
 * @b: The constant byte
 * @n: bytes
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int k = 0; k  < n; ++k)
	{
		s[k] = b;
	}

	return (s);
}
