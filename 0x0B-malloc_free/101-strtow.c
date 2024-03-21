#include "main.h"
#include <stdlib.h>

int count_words(char *str);
char *duplicate_word(char *str, int start, int end);

/**
 * strtow - The function splits the string into words
 * @str: The imput string
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, j, word_start, word_end;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			word_start = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			word_end = i;
			words[j] = duplicate_word(str, word_start, word_end);
			if (words[j] == NULL)
			{
				while (j > 0)
				{
					j--;
					free(words[j]);
				}
				free(words);
				return (NULL);
			}
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}

/**
 * count_words -The function counts the number of words in the string
 * @str: The imput string
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}

/**
 * duplicate_word - The function that forms a duplicate of a word from a string
 * @str: The imput string
 * @start: The starting point of the word
 * @end: The ending point of the word
 *
 * Return: A pointer to the duplicated word, or NULL if it fails
 */
char *duplicate_word(char *str, int start, int end)
{
	char *word;
	int i, j;

	word = malloc((end - start + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	for (i = start, j = 0; i < end; i++, j++)
		word[j] = str[i];
	word[j] = '\0';

	return (word);
}
