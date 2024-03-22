#include "main.h"
#include <stdlib.h>

int word_length(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_length - The function locates the index labeling the end of the first
 * word in the string.
 * @str: The input string to be searched
 * Return: The index lableling the end of the initial word pointed to by str
 */
int word_length(char *str)
{
	int index = 0, length = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		length++;
		index++;
	}
	return (length);
}

/**
 * count_words - The function counts the number of words carried in the string
 * @str: The input string to be searched
 * Return: The number of words carried in the string
 */
int count_words(char *str)
{
	int index = 0, words = 0, length = 0;

	for (index = 0; *(str + index); index++)
		length++;

	for (index = 0; index < length; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_length(str + index);
		}
	}
	return (words);
}

/**
 * strtow - The function splits the string into words
 * @str: The input string to be split
 *
 * Return: If string = NULL, string = "", or the function fails - NULL.
 * Otherwise - return to an array of words.
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, t, letters, c;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (t = 0; t < words; t++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_length(str + index);

		strings[t] = malloc(sizeof(char) * (letters + 1));

		if (strings[t] == NULL)
		{
			for (; t >= 0; t--)
				free(strings[t]);

			free(strings);
			return (NULL);
		}
		for (c = 0; c < letters; c++)
			strings[t][c] = str[index++];

		strings[t][c] = '\0';
	}
	strings[t] = NULL;

	return (strings);
}
