#include <stdio.h>

/**
 * main - Print lowercase z-a
 * Return: Always 0 (Success)
 */
int main(void)
{
	char e;

	for (e = 'z'; e >= 'a'; e--)
		putchar(e);

	putchar('\n');

	return (0);
}
