#include <stdio.h>

/**
 * main - combination of two two num
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k, n;


	for (k = 0; k < 100; k++)
	{
		for (n = k + 1; n < 100; n++)
		{
			putchar('0' + k / 10);
			putchar('0' + k % 10);
			putchar(' ');
			putchar('0' + n / 10);
			putchar('0' + n % 10);



			if (k != 98 || n != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
