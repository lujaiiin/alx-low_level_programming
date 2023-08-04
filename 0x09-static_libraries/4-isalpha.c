#include "main.h"
/**
 * _isalpha - shows 1 if the  input is a
 * letter Another cases, show 0
 *
 * @c: the charcter in ASCII code
 *
 * Return: 1 for latters 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c <= 90 && c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
