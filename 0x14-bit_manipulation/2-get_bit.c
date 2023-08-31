#include "main.h"

/**
 *get_bit - function
 *@n: valie
 *@index: value
 *Return: always
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;
	unsigned int j;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		j = n >> index;
		i = 1 & j;
	}
	return (i);
}
