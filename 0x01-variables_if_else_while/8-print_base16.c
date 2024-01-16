#include <stdio.h>

/**
 * main - Print all numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	int k;

	x = 'a';
	k = 0;
	while (k < 10)
	{
		putchar(k + '0');
		k++;
	}
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
