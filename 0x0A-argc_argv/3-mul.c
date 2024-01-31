#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - Program that multiplies two numbers
 * @argc: The number of arguments to be counted
 * @argv: The argumenent vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int k1 = 0, k2 = 0;

	if (argc == 3)
	{
		k1 = atoi(argv[1]);
		k2 = atoi(argv[2]);
		printf("%d\n", k1 * k2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
