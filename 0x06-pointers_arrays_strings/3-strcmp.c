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

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		l = (s1[i] - 48) - (s2[j] - 48);
		break;
	}
	s[i] = '\0';

	return (l);
}
