#include "main.h"

/**
 * clear_bit - The function clears the value of a bit to 0 at a gitven index
 * @n: The pointer to the number to clear the bit in
 * @index: The index of the bit to clear, beginning from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n &= ~(1 << index);
		return (1);
	}
}
