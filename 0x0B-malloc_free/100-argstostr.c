#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int lenght(char *av);
/**
 *argstostr - function
 *@ac: value
 *@av: value
 *Return: always
 */


char *argstostr(int ac, char **av)
{
	char *p;
	int i, j = 0;
	int x = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; j < ac; i++)
	{
		i += lenght(av[j]);
		j++;
	}
	p = malloc(sizeof(char) * i + 1);
	if (!p)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			p[x] = av[i][j];
			x++;
			j++;
		}
		p[x] = '\n';
		x++;
		i++;
	}
	p[x] = '\0';
	return (p);
}
/**
 * lenght - function
 * @av: value
 * Return: always
 */

int lenght(char *av)
{
	int i = 0;
	int ad = 0;

	while (av[i] != '\0')
	{
		ad++;
		i++;
	}
	return (ad);
}
