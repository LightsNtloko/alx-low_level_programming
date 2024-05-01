#include "main.h"

/**
 * set_bit - The function sets the value of a bit to 1 at a given index
 * @n: The pointer to the number to set the bit in
 * @index: The index of the bit to set, beginning from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else (*n |= (1 << index));
	{
		return (1);
	}
}
