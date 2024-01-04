#include "main.h"

/**
 * _strcat - A function that concatenates two srings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src, int k)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < k; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
