#include <stdio.h>

/**
 * print_name - A function that prints a name.
 * @name: The name that must be printed
 * @f: The function pointer to a printing function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
