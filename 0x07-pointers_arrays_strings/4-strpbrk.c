#include "main.h"

/**
 *_strpbrk - function
 *@s: value
 *@accept: value
 *Return: always
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] != accept[j])
			{
				continue;
			}
			else
				return (s + i);
		}
	}
	return (s + i);
}
