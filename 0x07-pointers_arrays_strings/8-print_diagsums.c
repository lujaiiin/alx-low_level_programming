#include "main.h"

/**
 *print_diagsums - function
 *@n: value
 *@size: value
 *Return: always
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum;

	sum = 0;

	for (i = 0; i< size; i++)
	{
		for (j = 0; j < size; i++)
		{
			if (i == j)
				sum += a[
		}
	}
	printf("%d, ",sum);
	printf("\n");
}
