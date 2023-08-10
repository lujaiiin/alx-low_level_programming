#include "main.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int lenght(char *s1, char *s2, unsigned int n);

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

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	p = malloc(sizeof(char) * (lenght(s1, s2, n) + 1));

	if (n >= lenght(s1, s2, n))
	{
		n = lenght(s1, s2, n);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (j < n)
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

unsigned int lenght(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int ad = 0;
	unsigned int j = 0;
	unsigned int s = 0;
	unsigned int l = 0;

	while (s1[i] != '\0')
	{
		ad++;
		i++;
	}
	s += ad;
	while (s2[j])
	{
		if (j < n)
		{
			l++;
			j++;
		}
	}
	s += l;
	return (l);
}
