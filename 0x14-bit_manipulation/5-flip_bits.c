#include "main.h"

/**
 * flip_bits - The function that returns the number of bits that will be needed
 * to flip to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive_OR_result = n ^ m;
	unsigned int count = 0;

	while (exclusive_OR_result > 0)
	{
		count += exclusive_OR_result & 1;
		exclusive_OR_result >>= 1;
	}

	return (count);
}
