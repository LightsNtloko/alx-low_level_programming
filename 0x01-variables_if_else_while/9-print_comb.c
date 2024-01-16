#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int khanyiso;

	for (khanyiso = 0; khanyiso < 10; khanyiso++)
	{
		putchar(khanyiso + '0');
		if (khanyiso < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
