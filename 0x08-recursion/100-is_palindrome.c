#include "main.h"

/**
 * _strlen_recursion - Return the length of a string.
 * @kay: The string to be checked
 * Return: The length of a string.
 */
int _strlen_recursion(char *kay)
{
	if (*kay == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(kay + 1));
}

/**
 * comparator - Compares each character of the string
 * @kay: The string to be checked
 * @k1: smallest iterator.
 * @k2: biggest iterator.
 * Return: .
 */
int comparator(char *kay, int k1, int k2)
{
	if (*(kay + k1) == *(kay + k2))
	{
		if (k1 == k2 || k1 == k2 + 1)
			return (1);
		return (0 + comparator(kay, k1 + 1, k2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - Detect if a string is a palindrome.
 * @kay: The string to be checked
 * Return: 1 if kay is a palindrome, 0 if not.
 */
int is_palindrome(char *kay)
{
	if (*kay == '\0')
		return (1);
	return (comparator(kay, 0, _strlen_recursion(kay) - 1));
}
