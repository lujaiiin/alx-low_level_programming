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
	int s, l;

	j = 0;

	while (a[j] != '\0')
	{
	for (i = n; i >= 0; i--)
	{
		s = a[i];
		l[j] = s;
		a[i] = l[j];
		j++;
	}
	}
}
