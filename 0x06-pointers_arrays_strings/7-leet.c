#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: To the encoded string
 */
char *leet(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		if (str[k] == 'a' || str[k] == 'A')
			str[k] = '4';
		if (str[k] == 'e' || str[k] == 'E')
			str[k] = '3';
		if (str[k] == 'o' || str[k] == 'O')
			str[k] = '0';
		if (str[k] == 't' || str[k] == 'T')
			str[k] = '7';
		if (str[k] == 'l' || str[k] == 'L')
			str[k] = '1';


		k++;
	}

	return (str);
}
