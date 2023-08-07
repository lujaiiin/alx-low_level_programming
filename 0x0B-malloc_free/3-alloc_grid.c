#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - function
 *@width: value
 *@height: value
 *Return: always
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	p = malloc(sizeof(int *) * height);

	if (p == 0)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
