#include "main.h"
#include <stdio.h>

int check_prime(int k, int n);

/**
 * is_prime_number - Returns if a number is prime
 * @k: the number to be checked
 *
 * Return: integer value
 */
int is_prime_number(int k)
{
	return (check_prime(k, 1));
}

/**
 * check_prime - Check if number is prime
 * @k: the number to be checked
 * @n: the iteration times
 *
 * Return: 1 for prime or 0 composite
 */
int check_prime(int k, int n)
{
	if (k <= 1)
		return (0);

	if (k % n == 0 && n > 1)
		return (0);

	if ((k / n) < n)
		return (1);

	return (check_prime(k, n + 1));
}
