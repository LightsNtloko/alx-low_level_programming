#include "main.h"

/**
 * print_chessboard - A function that prints the chessboard
 * @a: input
 * Return: Always 0 (Success).
 */
void print_chessboard(char (*a)[8])
{
	int k, n;

	for (k = 0; k < 8; k++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[k][n]);
		}
		_putchar('\n');
	}
}
