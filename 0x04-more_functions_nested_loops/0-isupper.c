#include "main.h"
#include <stdio.h>

/**
 * _isupper - return 1 if value is uppercase
 *
 *@c: the value i see if its upper or not
 *
 * Return: 1 if is upper 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
