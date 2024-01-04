#include "main.h"

/**
 * _strcat - A function that concatenates two srings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int k;
	int n;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	n = o;
	while (src[n] != '\0')
	{
		dest[k] = src[n];
		k++;
		n++;
	}

	dest[k] = '\0';
	return (dest);
}
