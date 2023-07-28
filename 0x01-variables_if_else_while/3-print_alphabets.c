#include <stdio.h>

/**
 * main - Print a lower case and upper case alphabet a or A
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	char A;

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');

	return (0);
}
