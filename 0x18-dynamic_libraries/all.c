#include <stdio.h>

/**
 * add - The function that add two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The sum of two numbers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - The function that subtract two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The results
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - The function that multipy two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The product of two integers
 */
int mul(int a, int b)
{
	return (a * b);
}

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
