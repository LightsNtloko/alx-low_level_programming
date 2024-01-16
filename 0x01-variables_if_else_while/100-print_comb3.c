#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number_1;
	int number_2;

	for (number_1 = 0; number_1 <= 8; number_1++)
	{
		for (number_2 = number_1 + 1; number_2 <= 9; number_2++)
		{
			putchar(number_1 + '0');
			putchar(number_2 + '0');


			if (number_1 != 8 || number_2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
