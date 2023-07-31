#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char k;

	k = 'a';

	for (k = 'z'; k <= 'z'; k++)
	{
		_putchar(k);
		k++;
	}
	_putchar('\n');

	return (0);
}
