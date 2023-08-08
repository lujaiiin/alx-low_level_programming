#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *strtow - function
 *@str: value
 *Return: always
 */

char **strtow(char *str)
{
	char *p;
	int i;

	i = 0;

	if (str == NULL || str == "")
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * );

	if (p == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		if (str[i] >= 65 || str[i] <= 90 || str[i] >= 97 || str[i] <= 122)
		{
			p[i] = str[i];
			if (str[i] == " ")
			{
				continue;
			}
		}
		i++;
	}
	return (p);
}
