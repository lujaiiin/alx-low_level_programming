#include "main.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int lenght(char *s1, char *s2);

/**
 *string_nconcat - function
 *@s1: value
 *@s2: value
 *@n: value
 *Return: always
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *p;
	unsigned int i = 0;
	unsigned int j = 0;

	p = malloc(sizeof(char) * lenght(s1, s2));

	if (p == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (j <= n)
	{
		p[i] = s2[j];
		j++;
		i++;
	}
	return (p);
}

/**
 *lenght - function
 *@s1: value
 *@s2: value
 *Return: always
 */

unsigned int lenght(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int ad = 0;
	unsigned int j = 0;

	while (s1[i] != '\0')
	{
		ad++;
		i++;
	}
	while (s2[j] != '\0')
	{
		ad++;
		j++;
	}
	return (ad);
}
