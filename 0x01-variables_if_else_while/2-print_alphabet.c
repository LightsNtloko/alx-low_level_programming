#include <stdio.h>

/**
 * main - Execute alphabets to lower case a-z
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k;

	k = 'a';

	while (k <= 'z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');

	return (0);
}
