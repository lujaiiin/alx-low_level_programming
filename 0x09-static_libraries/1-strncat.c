#include "main.h"

/**
 *_strncat - function
 *@dest: value
 *@src: value
 *@n: value
 *Return: always
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (j >= n)
		{
			break;
		}
		else
		{
		dest[i] = src[j];
		i++;
		j++;
		}
	}
	dest[i] = '\0';

	return (dest);
}
