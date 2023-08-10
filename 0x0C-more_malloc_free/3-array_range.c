#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - function
 *@min: value
 *@max: value
 *Return: always
 */

int *array_range(int min, int max)
{
	int *p;
	int sum = 0;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	sum = max - min;
	p = malloc(sizeof(int) * (sum + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min; i < max; i++)
	{
		p[i] = i;
	}
	return (p);
}
