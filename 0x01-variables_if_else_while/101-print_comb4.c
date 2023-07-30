#include <stdio.h>

/**
 * main - Triple digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k, n, m;


	for (k = 0; k <= 7; k++)
	{
		for (n = k + 1; n <= 8; n++)
		{
			for (m = n + 1; m <= 9; m++)
			{
				putchar(k + '0');
				putchar(n + '0');
				putchar(m + '0');


				if (k != 7 || n != 8 || m != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}


	putchar('\n');

	return (0);
}
