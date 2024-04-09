#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - The function checks if a string contains a non-digit char
 * @t: The string to be checked
 *
 * Return: 0 if a non-digit is passed, 1 otherwise
 */
int is_digit(const char *t)
{
	int u = 0;

	while (t[u])
	{
		if (t[u] < '0' || t[u] > '9')
			return (0);
		u++;
	}
	return (1);
}

/**
 * _strlen - The functions returns the length of a string
 * @t: The string to be checked
 *
 * Return: The length of the string
 */
int _strlen(const char *t)
{
	int len = 0;

	while (t[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * print_error - The function prints the "Error" message and exits
 * with status 98.
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply_strings - The function multiply two strings representing numbers.
 * @t1: The first number as a string.
 * @t2: The second number as a string.
 */
void multiply_strings(const char *t1, const char *t2)
{
	int len1, len2, len, j, carry, digit1, digit2, *product, v = 0;

	len1 = _strlen(t1);
	len2 = _strlen(t2);
	len = len1 + len2 + 1;
	product = malloc(sizeof(int) * len);
	if (!product)
		exit(1);
	for (j = 0; j < len; j++)
	{
		product[j] = 0;
	}
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = t1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(t2) - 1; len2 >= 0; len2--)
		{
			digit2 = t2[len2] - '0';
			carry += product[len1 + len2 + 1] + (digit1 * digit2);
			product[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			product[len1 + len2 + 1] += carry;
	}
	for (j = 0; j < len - 1; j++)
	{
		if (product[j])
			v = 1;
		if (v)
			_putchar(product[j] + '0');
	}
	if (!v)
		_putchar('0');
	_putchar('\n');
	free(product);
}

/**
 * main - The main entry point of the program.
 * @argc: The number of command-line arguments used.
 * @argv: The array containing the command-line arguments.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		print_error();

	multiply_strings(argv[1], argv[2]);

	return (0);
}
