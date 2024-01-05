#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: To the encoded string
 */
char *leet(char *str)
{
	int k, n;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (k = 0; str[k] != '\0'; k++)
	{
		for (n = 0; n < 10; n++)
		{
			if (str[k] == s1[n])
			{
				str[k] = s2[n];
			}
		}
	}
	return (str);
}
