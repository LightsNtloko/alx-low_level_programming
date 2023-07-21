#include <stdio.h>

/**
 * main - A program that prints the size of various data types
 * Return: 0 (Success)
 */

int main(void)
{

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of int: %lu byte(s)\n", sizeof(int));
	printf("size of long int: %lu byte(s)\n", sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of float: %lu byte(s)\n", sizeof(float));

	return (0);
}
