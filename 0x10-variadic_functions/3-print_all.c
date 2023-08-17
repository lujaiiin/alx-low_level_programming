#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function
 * @format: value
 * Return: value
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int x,  i = 0;
	char *c, *s = "";

	va_start(args, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(args, int));
					break;
				case 's':
					c = va_arg(args, char*);
					if (c == NULL)
					{
						c = "(nil)";
					}
					printf("%s%s", s, c);
					break;
				case 'i':
					x = va_arg(args, int);
					printf("%s%d", s, x);
					break;
				case 'f':
					printf("%s%f", s, va_arg(args, double));
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	va_end(args);
	printf("\n");
}
