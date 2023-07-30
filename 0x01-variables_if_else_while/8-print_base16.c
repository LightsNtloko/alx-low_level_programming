#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k;

	int n;

	k = 'a';
	n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (k <= 'f')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
