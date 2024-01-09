#include <string.h>
#include <stddef.h>
/**
 * *_strpbrk - A function that searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 *
 * Return: If set is matche - return to matched byte,
 * if no set is matched - return to NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return s;
		}
		s++;
	}

	return (NULL);
}
