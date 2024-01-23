#include "main.h"
#include <stdio.h>

int _sqrt(int k, int n);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @k: the number to calculate the natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int k)
{
	return (_sqrt(k, 1));
}

/**
 * _sqrt - Calculate natural square root
 * @k: the number to calculate the square root
 * @n: iterate number
 *
 * Return: the natural square root
 */
int _sqrt(int k, int n)
{
	int sqrt = n * n;

	if (sqrt > k)
		return (-1);

	if (sqrt == k)
		return (n);

	return (_sqrt(k, n + 1));
}
