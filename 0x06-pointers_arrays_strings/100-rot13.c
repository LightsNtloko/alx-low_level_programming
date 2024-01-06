#include "main.h"
#include <stdio.h>

/**
 * rot13 - A function that encodes a string using rot13.
 * @str: String to be encoded
 *
 * Return: To the encoded string
 */
char *rot13(char *str)
{
	int k;
	int n;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; str[k] != '\0'; k++)
	{
		for (n = 0; n < 52; n++)
		{
			if (str[k] == data1[n])
			{
				str[k] = datarot[n];
				break;
			}
		}
	}
	return (str);
}
