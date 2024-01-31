#include "main.h"

/**
 * _isupper - checks if a character
 * is uppercase
 * @k: The character to be checked
 *
 * Return: 1 if c is uppercase
 * 0 otherwise.
 */
int _isupper(int k)
{
	if (k >= 'A' && k <= 'Z')

		return (1);
	else
		return (0);
}
