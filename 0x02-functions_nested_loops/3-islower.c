#include "main.h"

/**
 * _islower - checks if a character
 * is lowercase.
 * @k: The character to be checked.
 *
 * Return: 1 if c is lowercase,
 * 0 otherwise.
 */
int _islower(int k)
{
	if (k >= 'a' && k <= 'z')
		
		return 1;
	else
		return 0;
}
