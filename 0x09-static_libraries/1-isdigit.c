#include "main.h"

/**
 * _isdigit - function that checks for 0 through 9
 * @k: The character to be checked.
 *
 * Return: 1 if character is a digit, 0 othereise.
 */
int _isdigit(int k)
{
	if (k >= 48 && k <= 57)

		return (1);
	else
		return (0);
}
