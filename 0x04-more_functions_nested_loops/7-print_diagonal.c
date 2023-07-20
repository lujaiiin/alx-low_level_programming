#include "main.h"

/**
 *print_diagonal - function print the diagnal
 *
 *@n: value that give me the time of num
 *
 *Return: always (succes)
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
