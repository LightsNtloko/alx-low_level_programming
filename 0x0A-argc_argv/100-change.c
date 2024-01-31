#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the minimum number of coins
 * to make change fo an amount of money.
 * @argc: The number of arguments to be printed
 * @argv: The argument vector
 *
 * Return: Always 0(Syccess)
 */
int main(int argc, char *argv[])
{
	int rands, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	rands = atoi(argv[1]);

	while (rands > 0)
	{
		coins++;
		if ((rands - 25) >= 0)
		{
			rands -= 25;
			continue;
		}
		if ((rands - 10) >= 0)
		{
			rands -= 10;
			continue;
		}
		if ((rands - 5) >= 0)
		{
			rands -= 5;
			continue;
		}
		if ((rands - 2) >= 0)
		{
			rands -= 2;
			continue;
		}
		rands--;
	}

	printf("%d\n", coins);

	return (0);
}
