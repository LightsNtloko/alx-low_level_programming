#include <stdio.h>
#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: input
 * @c: input
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (s + i);
	}

	return (NULL);
}
