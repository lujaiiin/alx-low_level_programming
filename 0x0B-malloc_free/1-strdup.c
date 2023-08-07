#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *_strdup - function
 *@str: value
 *Return: always
 */

int lenght(char *str);

char *_strdup(char *str)
{
	char *p;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * (lenght(str) + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= lenght(str); i++)
		{
			p[i] = str[i];
		}
	}
	return (p);
}

/**
 *lenght - function
 *@str: value
 *Return: always
 */

int lenght(char *str)
{
	int i = 0;
	int ad = 0;

	while (str[i] != '\0')
	{
		ad++;
		i++;
	}
	return (ad);
}
