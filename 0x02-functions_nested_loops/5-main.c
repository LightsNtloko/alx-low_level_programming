#include "main.h"

/**
 * main - check the code
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;


	k = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(k + '0');
	_putchar('\n');
	k = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(k + '0');
	_putchar('\n');
	k = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(k + '0');
	_putchar('\n');
	k = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(k + '0');
	_putchar('\n');
	return (0);
}
