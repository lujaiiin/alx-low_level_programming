#include "main.h"

/**
 * print_binary - function
 * @n: value
 * Return: always
 */

void print_binary(unsigned long int n)
{
	unsigned long int j;
	int i = 63;
	int c = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (i >= 0)
		{
			j = n >> i;
			if ((j & 1) == 1)
			{
				_putchar('1');
				c++;
			}
			else if (c)
			{
				_putchar('0');
			}
			i--;
		}
	}
}
