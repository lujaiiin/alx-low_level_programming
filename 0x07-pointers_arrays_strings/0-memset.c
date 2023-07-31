#include "main.h"

/**
 *_memset - finction to prints
 *@s: value
 *@b: value
 *@n: value
 *Return: always
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
