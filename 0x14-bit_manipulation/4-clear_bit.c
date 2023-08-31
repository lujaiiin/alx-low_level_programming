#include "main.h"

/**
 * clear_bit - function
 * @n: value
 * @index: value
 * Return: always
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (*n & (~(1UL << index)));
	return (1);
}
