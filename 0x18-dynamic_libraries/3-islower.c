#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @l: The character to be checked
 *
 * Return: 1 if d is lowercase;
 * 0 otherwise.
 */
int _islower(int l)
{
	if (l >= 'a' && l <= 'z')

		return (1);
	else
		return (0);
}
