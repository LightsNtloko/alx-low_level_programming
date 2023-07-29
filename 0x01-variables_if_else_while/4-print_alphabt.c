#include <stdio.h>

/**
 * main - Print alphabets except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
