#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a paremeter
 * @str: The string to be duplicated
 *
 * Return: A pointer to the duplicated string, or NULL if no enough memory.
 */
char *_strdup(char *str)
{
	unsigned int len, k;
	char *dub_str;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	dub_str = malloc((len + 1) * sizeof(char));

	if (dub_str == NULL)
		return (NULL);

	for (k = 0; k <= len; k++)
		dub_str[k] = str[k];

	return (dub_str);
}
