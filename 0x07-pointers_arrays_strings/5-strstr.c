#include <stddef.h>

/**
 * *_strstr - A function that locates a substring
 * @needle: input
 * @haystack: input
 *
 * Return: Beginning of the located substrim, or NULL
 * if the substrim is not located
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *k = haystack;
		char *n = needle;

		while (*n != '\0' && *k == *n)
		{
			k++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
