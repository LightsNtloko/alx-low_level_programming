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
	char leet_map[] = {'4', '3', '0', '7', '1'};


	while (str[k] != '\0')
	{
		int i = 0;

		while (i < 5)
		{
			if ((str[k] == 'a' || str[k] == 'A') && i == 0)
				str[k] = leet_map[i];
			else if ((str[k] == 'e' || str[k] == 'E') && i == 1)
				str[k] = leet_map[i];
			else if ((str[k] == 'o' || str[k] == 'O') && i == 2)
				str[k] = leet_map[i];
			else if ((str[k] == 't' || str[k] == 'T') && i == 3)
				str[k] = leet_map[i];
			else if ((str[k] == 'l' || str[k] == 'L') && i == 4)
				str[k] = leet_map[i];


			i++;
		}
		k++;
	}

	return (str);
}
