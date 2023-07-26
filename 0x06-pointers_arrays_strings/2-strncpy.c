#include "main.h"

/**
 *_strncpy - function
 *@dest: value
 *@src: value
 *@n: value
 *Return: always
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		if (i >= n)
		{
			break;
		}
		else
		{
		dest[i] = src[i];
		}
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
