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
	unsigned int sum = 0;
	unsigned int i;

	va_list base;

	va_start(base, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(base, const unsigned int);
		}
	}
	va_end(base);
	return (sum);
}
