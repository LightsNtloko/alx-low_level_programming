#include "main.h"

/**
 * *string_toupper - A function that changes all lowercase
 * letters of a string to uppercase.
 * @str: The string to convert.
 *
 * Return: A pointer to the modified string
 */
char *string_toupper(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		if (str[k] >= 'a' && str[k] <= 'z')
		{
			str[k] = str[k] - ('a' - 'A');
		}
		k++;
	}

	return (str);
}
