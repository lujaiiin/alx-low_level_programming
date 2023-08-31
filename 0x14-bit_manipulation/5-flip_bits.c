#include "main.h"

/**
 * flip_bits - function
 * @n: value
 * @m: value
 *Return: always
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int j;
	int i, c = 0;

	for (i = 63; i >= 0; i--)
	{
		j = (n ^ m) >> i;
		if (j & 1)
		{
			c++;
		}
	}
	return (c);
}
