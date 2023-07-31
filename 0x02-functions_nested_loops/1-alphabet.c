#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char k;

	k = 'a';

	for (k <= 'z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');

	return (0);
}
