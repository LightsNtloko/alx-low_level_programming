#include <stdio.h>

/**
 * print_rev - A function that prints a string in reverse followed by a new line
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}

	while (*s != '\0')
	{
		s++;
	}

	s--;
	while (s >= 0)
	{
		printf("%c", *s);
		str--;
	}

	printf("\n");
}
