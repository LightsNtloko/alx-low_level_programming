#include "main.h"
#include <stdlib.h>

/**
 * string_concat - The function that concatenates two strings
 * @s1: The first inut string
 * @s2: The second input string
 * @n: The maximum number of bytes of s2 to concatenate
 *
 * Return: A pointer to the conaenated string
 * if memory allocation fals or if both s1 and s2 are NULL, return to NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, length2 = 0, i, j;
	char *concat;

	if (s1 != NULL)
	{
		while (s1[length1] != '\0')
			length1++;
	}
	if (s2 != NULL)
	{
		while (s2[length2] != '\0')
			length2++;
	}
	if (n >= length2)
		n = length2;

	concat = malloc(sizeof(char) * (length1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
