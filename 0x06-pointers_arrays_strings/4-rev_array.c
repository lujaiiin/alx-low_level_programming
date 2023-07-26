#include "main.h"

/**
 *reverse_array - function
 *@a: value
 *@n: value
 *Return: always
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int tmp = 0;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
