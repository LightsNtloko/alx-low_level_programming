#include <stdio.h>

/**
 * mod - The function that calculate the remainder of division
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The remainder
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error: Modulo by zero\n");
		return (0);
	}
}
