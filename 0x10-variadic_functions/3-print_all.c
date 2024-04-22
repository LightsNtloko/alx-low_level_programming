#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Function prints arguments based on the provided format string
 * @format: A format string specifying the types of arguments to print
 */
void print_all(const char * const format, ...)
{
	int i, scan_stat;

	char *str;
	va_list spc;

	va_start(spc, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
				scan_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(spc, double));
				scan_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(spc, int));
				scan_stat = 0;
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				scan_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && scan_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(spc);
}
