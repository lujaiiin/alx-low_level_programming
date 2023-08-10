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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * sizeof(size));

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
