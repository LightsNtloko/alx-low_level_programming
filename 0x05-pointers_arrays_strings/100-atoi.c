#include "main.h"

/**
 * _atoi - A function that convert a string to an integer
 * @k: The string to be converted.
 * Return: The converted integer.
 */
int _atoi(char *k)
{
	int product = 0;
	int sign = 1;

	while (*k == ' ')
		k++;

	if (*k == '-' || *k == '+')
	{
		if (*k == '-')
			sign = -1;
		k++;
	}

	while (*k >= '0' && *k <= '9')
	{
		product = product * 10 + (*k - '0');
		k++;
	}

	return (product * sign);
}
