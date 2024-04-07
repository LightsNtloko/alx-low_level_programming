#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_output - The function prints the output of the string
 * @output: The output string to be printed
 */
void print_output(char *output)
{
	int t = 0;

	while (output[t] == '0' && output[t + 1] != '\0')
		t++;

	while (output[t] != '\0')
		_putchar(output[t++]);
	_putchar('\n');
}

/**
 * is_digit - The function checks if a character is a digit
 * @k: The chararcter to ckeck
 * Return: 1 if the character is a digit , 0 otherwise
 */
int is_digit(char k)
{
	return (k >= '0' && k <= '9');
}

/**
 * print_error - The funcion prints the "Erro" and exits with status 98.
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - The main entry point of the program
 * @argc: The number of command-line arguments used
 * @argv: The aray containing the command-line arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int t;
	int u;

	if (argc != 3)
		print_error();
	for (t = 1; t < argc; t++)
	{
		u = 0;

		while (argv[t][u])
		{
			if (!is_digit(argv[t][u]))
				print_error();
			u++;
		}
	}

	multiply(argv[1], argv[2]);

	return (0);
}

/**
 * multiply - The function gives a product of two positive numbers represented
 * as strings
 * @num1: The first numbers as a string
 * @num2: The second number as a string
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, len_output = 0;
	int t, u, carry, product;

	char *output;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	len_output = len1 + len2;
	output = malloc(sizeof(char) * (len_output + 1));

	if (output == NULL)
		print_error();
	for (t = 0; t < len_output; t++)
		output[t] = '0';
	for (t = len1 - 1; t >= 0; t--)
	{
		carry = 0;
		for (u = len2 - 1; u >= 0; u--)
		{
			product = (num1[t] - '0') * (num2[u] - '0') +
				(output[t + u + 1] - '0') + carry;
			output[t + u + 1] = (product % 10) + '0';
			carry = product / 10;
		}
		output[t + u + 1] += carry;
	}
	print_output(output);
	free(output);

}
