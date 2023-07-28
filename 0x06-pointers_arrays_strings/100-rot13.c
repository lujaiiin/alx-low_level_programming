#include "main.h"

/**
 * rot13 - function
 *
 *@s: value
 *Return: always
 */

char *rot13(char *s)
{
	int i;

	char l[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char k[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *j = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == l[i])
			{
				*s = k[i];
				break;
			}
		}
		s++;
	}
	return (j);
}
