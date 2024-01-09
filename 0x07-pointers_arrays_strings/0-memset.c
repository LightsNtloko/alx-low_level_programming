#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @k: The pointed destination
 * @x: The constant byte
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *k, char x, unsigned int n)
{
	char *ptr = k;

	while (n > 0)
	{
		*ptr = x;
		ptr++;
		n--;
	}

	return (k);
}
