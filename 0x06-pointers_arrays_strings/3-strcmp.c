#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 * @s1: String to be compared with s2.
 * @s2: String to be compared with s2.
 * Return: Difference between the characters at a first
 * non-matching position.
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	for (k = 0; s1[k] != '\0' && s2[k] != '\0'; k++)
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
	}
}
