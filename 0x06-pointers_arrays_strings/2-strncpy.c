#include "main.h"

/**
 * *_strncpy - A function that copies a string
 * @src: The source string
 * @dest: The destination where the string should be copied
 * @n: The length of the string
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
