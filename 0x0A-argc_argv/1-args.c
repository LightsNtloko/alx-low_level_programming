#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed to it
 * @argc: The number of arguments passed
 * @argv: The argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
