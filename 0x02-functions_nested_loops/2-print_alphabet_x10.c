#include "main.h"

/**
 * print_alphabet_x10 - prints
 * 10 times the alphabet in lowercas
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	char k = 'a';
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(k);
			k++;
		}
		_putchar('\n');
		k = 'a';
	}
}