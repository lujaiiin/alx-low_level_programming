#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function
 * @separator: value
 * @n: value
 * Return: always
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char  *x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char*);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (i + 1 == n)
			continue;
		else
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	printf("\n");

}
