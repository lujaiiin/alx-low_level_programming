#include "main.h"

/**
 * _isdigit - return 1 if its a digit else return
 * 0
 *
 *@c: the value i well check if its digit or not
 *
 * Return: 1 if its digit 0 if its not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
