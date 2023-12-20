#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic character
 * (lowercase or uppercase).
 * @l: The character to be checked
 *
 * Return: 1 if l is alphabetic character,
 * 0 otherwise.
 */
int _isalpha(int l)
{
	if ((l >= 65 && l <= 90) || (l >= 97 && l <= 122))

		return (1);
	else
		return (0);
}
