#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The pointer to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if there is one or more chars in the
 * string 'b' that is not 0 or 1, or if 'b' is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			val = val * 2 + (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}

	return (val);
}
