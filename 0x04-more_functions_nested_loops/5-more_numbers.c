#include "main.h"

/**
 *more_numbers - function prints from 0 to 14 four times
 *
 *Return: No (succes)
 */

void more_numbers(void)
{
	int i, j, sum;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			sum = j;
			if (sum >= 10)
			{
				sum = j % 10;
				_putchar(j / 10 + 48);
			}
			_putchar(sum + 48);
		}
	_putchar('\n');
	}
}
