#include "main.h"

/**
 *print_diagsums - function
 *@a: value
 *@size: value
 *Return: always
 *Describtion: adescreption about
 */

void print_diagsums(int *a, int size)
{
	int i, sum, sum2;

	sum = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}

	printf("%d, ", sum);
	printf("%d\n", sum2);
}
