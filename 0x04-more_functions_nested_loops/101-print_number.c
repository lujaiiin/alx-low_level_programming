#include "main.h"

/**
 * print_number - prints numbers
 *
 * @n: value that..
 */

void print_number(int n)
{
	unsigned int o;

	o = n;
	if (n < 0)
	{
		_putchar('-');
		o *= -o;
	}
	if (o / 10)
	{
		print_number(o / 10);
	}
	_putchar(o % 10 + '0');
}
