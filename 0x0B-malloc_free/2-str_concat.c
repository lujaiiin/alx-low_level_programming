#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - function
 *@s1: value
 *@s2: value
 *Return: always
 */

int lenght(char *s1, char *s2);

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *p;

	p = malloc(sizeof(char) * (lenght(s1, s2) + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	else 
	{
		while (s1[i] !='\0')
		{
			p[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			p[i] = s2[j];
			i++;
			j++;
		}
		return (p);
	}
}

/**
 *lenght - function
 *@s1: value
 *@s2: value
 *Return: always
 */

int lenght(char *s1, char *s2)
{
	int i = 0;
	int ad = 0;
	int ad2 = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		ad++;
		i++;
	}
	while (s2[j] != '\0')
	{
		ad2++;
		j++;
	}
	return (ad+ad2);
}
