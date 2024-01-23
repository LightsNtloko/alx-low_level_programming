#include "main.h"

/**
 * _pow_recursion - Return the value of x raised to the power of y
 * @k: the value to multiply
 * @n: the times to multiply the value of k
 *
 * Return: the value multiplied n times
 */
int _pow_recursion(int k, int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (k * _pow_recursion(k, n - 1));
}
