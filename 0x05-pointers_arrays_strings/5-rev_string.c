#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @k: The string to be reversed
 */
void rev_string(char *k)
{
	int length = 0;
	int initial, final;
	char temp;

	while (k[length] != '\0')
		length++;

	initial = 0;
	final = length - 1;

	while (initial < final)
	{
		temp = k[initial];
		k[initial] = k[final];
		k[final] = temp;

		initial++;
		final--;
	}
}
