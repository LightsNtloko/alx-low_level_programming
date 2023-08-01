#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
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
