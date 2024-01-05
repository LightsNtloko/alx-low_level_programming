#include "main.h"

/**
 * _strcat - A function that concatenates two srings
 * @dest: input value
 * @src: input value
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int kay = 0, k;

	while (dest[kay])
	{
		kay++;
	}

	for (k - 0; src[k] != 0; k++)
	{
		dest[kay] = src[k];
		kay++;
	}

	dest[kay] = '\0';
	return (dest);
}
