#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - The function adds two integers
 * @a: The 1st integer
 * @b: The 2nd integer
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The function that subtracts two integers
 * @a: The 1st integer
 * @b: The 2nd integer
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The function multiplies two integers
 * @a: The 1st integer
 * @b: The 2nd integer
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The function divides two integers
 * @a: The 1st integer (dividend)
 * @b: The 2nd integer (devisor)
 *
 * Return: The result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - The function computes the remainder of the division of two integers
 * @a: The 1st integer (dividend)
 * @b: The 2nd integer (divisor)
 *
 * Return: The remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
