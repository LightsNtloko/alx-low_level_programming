#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	k = 0;
	while (k < 10)
	{
		putchar(k + '0');
		k++;
	}
	putchar('\n');
	return (0);
}
