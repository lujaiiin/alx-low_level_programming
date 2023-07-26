#include "main.h"

/**
 *_strcmp - function
 *@s1: first value
 *@s2: secound
 *Return: always
 */

int _strcmp(char *s1, char *s2)
{
	int i, l;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
		l = s1[i] -s2[i];
		return (l);
		}
		i++;
	}
return (0);	
}
