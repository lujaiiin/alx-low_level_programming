#include "main.h"

/**
 *print_triangle - function prints the tra
 *
 * @size: value
 *
 * Return: always 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = size; j >= 1; j--)
			if (j > i)
			{
			_putchar(' ');
			}
			else
				_putchar(35);
		_putchar('\n');
	}
}
