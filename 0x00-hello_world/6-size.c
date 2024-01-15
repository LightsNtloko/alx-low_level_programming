#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the size of various computer types
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char k;
	int a;
	long int n;
	long long int d;
	float f;

	printf("Size of char: %zu bytes\n", (unsigned long)sizeof(k));
	printf("Size of int: %zu bytes\n", (unsigned long)sizeof(a));
	printf("Size of long int: %zu bytes\n", (unsigned long)sizeof(n));
	printf("Size of long long int: %zu bytes\n", (unsigned long)sizeof(d));
	printf("Size of float: %zu bytes\n", (unsigned long)sizeof(f));
	return (0);
}
