#include <stdio.h>

/**
 * main - Print a lower case and upper case alphabet a or A
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k = 'a';
	char K = 'A';

	while (k <= 'z')
	{
		putchar(k);
		k++;
	}
	while (K <= 'Z')
	{
		putchar(K);
		K++;
	}
	putchar('\n');

	return (0);
}
