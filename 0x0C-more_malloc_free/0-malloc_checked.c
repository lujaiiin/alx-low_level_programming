#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - function
 *@b: value
 *Return: always
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
