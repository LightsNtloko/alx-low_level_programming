#include <stdio.h>

/**
 * divide - The function that calculate the remainder of division
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The result
 * Note: If b is zero, prints an error message and returns 0.
 */
int divide(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}
