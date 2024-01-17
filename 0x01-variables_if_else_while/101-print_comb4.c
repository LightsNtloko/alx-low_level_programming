#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int mr, khanyiso, ntloko;

	for (mr = 0; mr <= 7; mr++)
	{
		for (khanyiso = mr + 1; khanyiso <= 8; khanyiso++)
		{
			for (ntloko = khanyiso + 1; ntloko <= 9; ntloko++)
			{
				putchar(mr + '0');
				putchar(khanyiso + '0');
				putchar(ntloko + '0');

				if (mr != 7 || khanyiso != 8 || ntloko != 9)
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
