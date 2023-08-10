#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - function
 *@nmemb: value
 *@size: value
 *Return: always
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}
	while (x < (size * nmemb))
	{
		p[x] = 0;
		x++;
	}
	return (p);
}
