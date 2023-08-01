#include "main.h"

/**
 * main - check the code.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	k = _isalpha('H');
	_putchar(k + '0');
	k = _isalpha('o');
	_putchar(k + '0');
	k = _isalpha(108);
	_putchar(k + '0');
	k = _isalpha(';');
	_putchar(k + '0');
	_putchar('\n');
	return (0);
}
