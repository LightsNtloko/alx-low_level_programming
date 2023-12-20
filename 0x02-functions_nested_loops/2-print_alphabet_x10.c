#include "main.h"

/**
 * print_alphabet_x10 - prints
 * 10 times the alphabet in lowercase
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char l = 'a';
	int d;
	int n;

	for (d = 0; d < 10; d++)
	{
		for (n = 0; n < 26; n++)
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		l = 'a';
	}
}
