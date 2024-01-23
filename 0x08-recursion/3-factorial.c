#include "main.h"

/**
 * factorial - Determine the factorial of a number
 * @kay: the number to be return the factorial
 *
 * Return: Integer value
 */
int factorial(int kay)
{
	if (kay < 0)
		return (-1);
	if (kay <= 1)
		return (1);
	return (kay * factorial(kay - 1));
}
