#include "main.h"

/**
 * _strcat - A function that concatenates two srings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int length_of_string, y;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (y = 0; src[y] != '\0'; y++, length_of_string++)
	{
		dest[length_of_string] = src[j];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
