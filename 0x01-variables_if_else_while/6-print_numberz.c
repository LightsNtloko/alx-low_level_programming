#include <stdio.h>

/**
 * main - print all single digit 0-9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	k = 0;
	while (k < 10)
	{
		putchar(k + '0');
		k++;
	}
	putchar('\n');
	return (0);
}
