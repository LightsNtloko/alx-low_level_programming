#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	putchar("$s\n", s1);
	putchar("%s", s2);
	ptr = _strcat(s1, s2);
	putchar("%s", s1);
	putchar("%s", s2);
	putchar("%s", ptr);
	return (0);
}
