#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: The pointed destination
 * @b: The constant byte
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
