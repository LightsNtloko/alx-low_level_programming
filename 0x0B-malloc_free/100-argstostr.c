#include "main.h"
#include <stdlib.h>

/**
 * argstostr - The function concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: The array of arguments
 *
 * Return: The pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
		}
		total_length += len + 1;
	}

	str = malloc(sizeof(char) * total_length);
	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[len++] = av[i][j++];
		}
		str[len++] = '\n';
	}
	str[len] = '\0';

	return (str);
}
