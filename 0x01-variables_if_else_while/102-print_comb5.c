#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int khanyiso, ntloko;

	for (khanyiso = 0; khanyiso < 100; khanyiso++)
	{
		for (ntloko = khanyiso + 1; ntloko < 100; ntloko++)
		{
			putchar('0' + khanyiso / 10);
			putchar('0' + khanyiso % 10);
			putchar(' ');
			putchar('0' + ntloko / 10);
			putchar('0' + ntloko % 10);

			if (khanyiso != 98 || ntloko != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
