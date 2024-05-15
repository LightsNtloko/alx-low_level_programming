#include <stdio.h>

/**
 * print_before_main - The function prints a statement before main
 * function is executed.
 */
void __attribute__((constructor)) print_before_main()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
