#include "main.h"

/**
 * main - Print a-z in lowercase
 * Discription: a-z alphabet
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char k;

	k = 'a';

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
