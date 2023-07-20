#include "main.h"

/**
 * print_number - prints numbers 
 *
 * @n: value that..
 */

void print_number(int n)
{
	int p;

	if (n <= 0)
	{
		n = n * -1;
		_putchar('-');
		_putchar(n + '0');
	}
	if (n > 0)
	{
		p = n / 10;
		p = p / 10;
	}
	_putchar((p % 10)+ '0');
}
