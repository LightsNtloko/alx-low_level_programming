#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers fron n to 98
 * @l: The number to start printing from
 * Return: Always 0.
 */
void print_to_98(int l)
{
	if (l <= 98)
	{
		for (; l <= 98; l++)
		{
			if (l == 98)
			{
				printf("%d", l);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", l);
			}
		}
	}
	else
	{
		for (; l >= 98; l--)
		{
			if (l == 98)
			{
				printf("%d", l);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", l);
			}
		}
	}
}
