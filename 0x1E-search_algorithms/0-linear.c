#include "search_algos.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * linear_search - functiony
 * @array: array
 * @size: the lenght
 * @value: val
 * Return: always
 */

int linear_search(int *array, size_t size, int value)
{
	size_t fir = 0;

	if (!array || size == 0)
	{
		return (-1);
	}

	while (fir < size)
	{
		printf("Value checked array[%lu] = [%d]\n", fir, array[fir]);

		if (array[fir] == value)
		{
			return (fir);
		}
		fir++;
	}

	return (-1);
}
