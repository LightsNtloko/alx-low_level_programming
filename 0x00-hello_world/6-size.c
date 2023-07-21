#include <stdio.h>

/**
 * main - A program that prints the size of various data types
 * Return: 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("size of int: %lu byte(s)\n", sizeof(b));
	printf("size of long int: %lu byte(s)\n", sizeof(c));
	printf("size of long long int: %lu byte(s)\n", sizeof(d));
	printf("size of float: %lu byte(s)\n", sizeof(f));

return (0);
}
