#include "main.h"

/**
 * _strlen_recursion - Determine the length of a string
 * @kay: the string to return
 *
 * Return: Integer value
 */
int _strlen_recursion(char *kay)
{
	if (*kay == '\0')
	{
		return (0);
	}

	kay++;
	return (_strlen_recursion(kay) + 1);
}
