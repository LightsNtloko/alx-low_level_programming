#include "main.h"

/**
 * _atoi - A function that convert a string to an integer
 * @k: The string to be converted.
 * Return: The converted integer.
 */
int _atoi(char *k)
{
	int n = 0;
	unsigned int tk = 0;
	int kay = 1;
	int lit = 0;

	while (k[n])
	{
		if (k[n] == 45)
		{
			kay *= -1;
		}
		while (k[n] >= 48 && k[n] <= 57)
		{
			lit = 1;
			tk = (tk * 10) + (k[n] - '0');
			n++;
		}
		if (lit == 1)
		{
			break;
		}
		n++;
	}
	tk *= kay;
	return (tk);
}
