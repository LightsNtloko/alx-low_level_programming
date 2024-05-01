#include "main.h"

/**
 * get_endianness - The function checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int a;
	char *z;

	a = 1;
	z = (char *)&a;
	return (*z);
}
