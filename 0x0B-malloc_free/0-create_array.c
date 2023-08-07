#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function
 *@size: value
 *@c: value
 *Return: always
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	else
	{

		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
}
