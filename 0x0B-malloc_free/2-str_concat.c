#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenate two strings.
 * @c1: The first string
 * @c2: The second string
 *
 * Return: A pointer to the integrated string, or NULL on failure.
 */
char *str_concat(char *c1, char *c2)
{
	unsigned int len1 = 0, len2 = 0, k, n;
	char *integrated_str;

	if (c1 == NULL)
		c1 = "";
	if (c2 == NULL)
		c2 = "";

	while (c1[len1] != '\0')
		len1++;

	while (c2[len2] != '\0')
		len2++;

	integrated_str = malloc((len1 + len2 + 1) * sizeof(char));

	if (integrated_str == NULL)
		return (NULL);

	for (k = 0; k < len1; k++)
		integrated_str[k] = c1[k];

	for (n = 0; n <= len2; n++)
		integrated_str[k + n] = c2[n];

	return (integrated_str);
}
