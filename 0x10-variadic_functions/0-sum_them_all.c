#include <stdarg.h>

/**
 * sum_them_all - This function returns the sum of all its paremeters
 * @n: The number of parmeters
 * @...: The variable number of paremeters to sum
 *
 * Return: The sum of all paremeters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
