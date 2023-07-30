#include <stdio.h>

/**
 * main - print lowercase z-a
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	k = 'z';
	while (k >= 'a')
	{
		putchar(k);
		k--;
	}
	putchar('\n');
	return (0);
}
