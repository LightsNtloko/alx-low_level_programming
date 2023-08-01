#include "main.h"

/**
 * _isalpha - checks if a character
 * is an alphabetic letter
 * (lowercase or uppercase).
 * @k: The character to be checked.
 *
 * Return: 1 if k is an alphabetic
 * letter, 0 otherwise.
 */
int _isalpha(int k)
{
	if ((k >= 65 && k <= 90) || (k >= 97 && k <= 122))

		return (1);
	else
		return (0);
}
