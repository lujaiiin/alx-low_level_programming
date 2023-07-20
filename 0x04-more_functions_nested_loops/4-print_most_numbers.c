#include "main.h"

/**
 * print_most_numbers - function prints digit num whitout 2 and 4
 *
 * Return: No (succes)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 52 || i == 50)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
