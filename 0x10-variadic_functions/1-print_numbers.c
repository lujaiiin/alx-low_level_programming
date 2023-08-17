#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - function
 *@n: value
 *@separator: value
 *Return: always
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);
		}
		va_end(args);
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);
			if (i + 1 == n)
			{
				continue;
			}
			else
				printf("%s", separator);
		}
		va_end(args);
		printf("\n");
	}
}
