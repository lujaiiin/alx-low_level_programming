#include "main.h"

/**
 *_strcmp - function
 *@s1: first value
 *@s2: secound
 *Return: always
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, l;

	i = 48;
	j = 48;

	while (s1[i] != '\0')
	{
		l = s1[i] - s2[j];
		i++;
		j++;
	}
	return (l);
}
