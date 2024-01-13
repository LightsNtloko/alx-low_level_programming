#include <string.h>
#include <stddef.h>

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		k++;
		s++;
	}

	return (k);
}
