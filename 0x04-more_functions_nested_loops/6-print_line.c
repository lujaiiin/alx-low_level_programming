#include "main.h"

/**
 *print_line - function prints line when its not 0
 *
 *@n: anumber of time
 *
 * Return: Always (succes
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
			_putchar('_');
	}
	_putchar('\n');
}
