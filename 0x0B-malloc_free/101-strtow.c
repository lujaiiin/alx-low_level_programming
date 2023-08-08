#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int co(char *str);
int lenght(char *str);

/**
 *strtow - function
 *@str: value
 *Return: always
 */

char **strtow(char *str)
{
	char **p;
	int i = 0;
	int wo, y, le, l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	wo = co(str);
	if (wo == 0)
		return (NULL);

	p = malloc(sizeof(char *) * (wo + 1));
	if (p == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < wo; y++)
	{
		while (str[i] == ' ')
			i++;

		le = lenght(str + i);

		p[y] = malloc(sizeof(char) * (le + 1));

		if (p[y] == NULL)
		{
			for (; y >= 0; y--)
				free(p[y]);
			free(p);
			return (NULL);
		}
		for (l = 0; l < le; l++)
			p[y][l] = str[i++];

		p[y][l] = '\0';
	}
	p[y] = NULL;

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

	while (*(str + i) && *(str + i) != ' ')
	{
		ad++;
		i++;
	}
	return (ad);
}

/**
 *co - function
 *@str: value
 *Return: always
 */

int co(char *str)
{
	int i = 0;
	int w = 0;
	int l = 0;

	for (i = 0; *(str + i); i++)
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		if (*(str + i) != ' ')
		{
			w++;
			i += lenght(str + i);
		}
	}
	return (w);
}
