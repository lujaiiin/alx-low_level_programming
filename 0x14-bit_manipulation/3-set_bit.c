#include "main.h"

/**
 * set_bit - functon
 * @n: value
 * @index: value
 * Return: always
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
	{
		return (-1);
	}
	else
	{
		*n = *n | (1 << index);
	}
	return (*n);
}
