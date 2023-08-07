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

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(sizeof(char) * size);
		*p = c;
		return (p);
	}
}
