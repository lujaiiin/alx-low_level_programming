#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function
 * @n: value
 * Return: always
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}

	va_end(args);

	return (sum);
}
