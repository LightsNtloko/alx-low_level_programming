#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Program that adds positive numbers
 * @argc: The arguments to be counted
 * @argv: The argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int k;
	unsigned int n, sum = 0;
	char *m;

	if (argc > 1)
	{
		for (k = 1; k < argc; k++)
		{
			m = argv[k];

			for (n = 0; n < strlen(m); n++)
			{
				if (m[n] < 48 || m[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(m);
			m++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
