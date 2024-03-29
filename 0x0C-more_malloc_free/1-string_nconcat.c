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
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)
		l = i + k;
	else
		l = i + n;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	while (j < l)
	{
		if (l <= i)
			str[j] = s1[j];
		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
