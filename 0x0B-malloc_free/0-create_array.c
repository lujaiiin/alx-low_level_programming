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

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(sizeof(char) * size);
		for (i = 0; i <= size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
}
