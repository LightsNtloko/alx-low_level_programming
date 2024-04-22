#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - The function prints a character argument.
 * @c: The character to print
 * @sep: Whether to print a separator after the character
 */
void print_char(char c, int sep)
{
	printf("%c", c);
	if (sep)
		printf(", ");
}

/**
 * print_int - The function prints an integer argument.
 * @num: The integer to print
 * @sep: Whether to print a separator after the integer
 */
void print_int(int num, int sep)
{
	printf("%d", num);
	if (sep)
		printf(", ");
}

/**
 * print_float - The function prints a float argument.
 * @fnum: The float to print
 * @sep: Whether to print a separator after the float
 */
void print_float(float fnum, int sep)
{
	printf("%f", fnum);
	if (sep)
		printf(", ");
}

/**
 * print_string - The functon prints a string argument.
 * @str: The string to print
 * @sep: Whether to print a separator after the string
 */
void print_string(char *str, int sep)
{
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
	if (sep)
		printf(", ");
}

/**
 * print_all - Function prints arguments based on the provided format string
 * @format: A format string specifying the types of arguments to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(va_arg(args, int), format[i + 1]);
				break;
			case 'i':
				print_int(va_arg(args, int), format[i + 1]);
				break;
			case 'f':
				print_float(va_arg(args, double), format[i + 1]);
				break;
			case 's':
				print_string(va_arg(args, char *), format[i + 1]);
				break;
			default:
				i++;
				continue;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
