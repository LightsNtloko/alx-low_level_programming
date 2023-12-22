#include "main.h"

/**
 * _isdigit - checks if a character
 * is a digit
 * @k: The character to be checked.
 *
 * Return: 1 for a character that will be a digit or 
 * 0 for any else
 */
int _isdigit(int k)
{
	if (k >= 0 && k <= 9)

		return (1);
	else
		return (0);
}
