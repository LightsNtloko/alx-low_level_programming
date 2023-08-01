#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	k = _abs(-1);
	printf("%d\n", k);
	k = _abs(0);
	printf("%d\n", k);
	k = _abs(1);
	printf("%d\n", k);
	k = _abs(-98);
	printf("%d\n", k);
	return (0);
}
