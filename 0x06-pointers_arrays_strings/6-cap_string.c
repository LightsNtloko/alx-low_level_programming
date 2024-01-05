#include "main.h"
#include <stdio.h>

/**
 * cap_string - A function that capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A ponter to the modified string.
 */
char *cap_string(char *str)
{
	int k = 0;

	printf("Before capitalization: %s\n", str);

	while (str[k] != '\0')
	{
		if (str[k] == ' ' || str[k] == '\t' || str[k] == '\n' || str[k] == ',' ||
			str[k] == ';' || str[k] == '.' || str[k] == '!' || str[k] == '?' ||
			str[k] == '"' || str[k] == '(' || str[k] == ')' || str[k] == '{' ||
			str[k] == '}')
		{
			if (str[k + 1] >= 'a' && str[k + 1] <= 'z')
			{
				str[k + 1] = str[k + 1] - 32;
			}
		}
		k++;
	}

	printf("After capitalization: %s\n", str);

	return (str);
}
