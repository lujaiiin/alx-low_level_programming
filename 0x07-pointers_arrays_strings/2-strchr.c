#include "main.h"

/**
 *_strchr - function
 *@s: value
 *@c: value
 *Return: always
 */

char *_strchr(char *s, char c)
{
	int i;
	char f[100];

	for ( i = 0; i != '\0'; i++)
	{
		if (s[i] != c)
			i++;
		else
		{

		}
	}
	for (i = 0; f[i] != '\0'; i++)
	{
		s[i] = f[i];
	}
	return (s);
}
