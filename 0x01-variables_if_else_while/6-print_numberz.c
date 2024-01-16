#include <stdio.h>

/**
 * main - Prints all single digit 0-9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int khanyiso;

	khanyiso = 0;
	while (khanyiso < 10)
	{
		putchar(khanyiso + '0');
		khanyiso++;
	}
	putchar('\n');
	return (0);
}
