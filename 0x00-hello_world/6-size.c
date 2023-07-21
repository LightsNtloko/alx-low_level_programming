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

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of %sint: %lu byte(s)\n", sizeof(b) == 1 ? "an " : "a ", (unsigned long)sizeof(b));
	printf("size of %slong int: %lu byte(s)\n", sizeof(c) == 1 ? "a " : "a ", (unsigned long)sizeof(c));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
