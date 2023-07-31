#include "main.h"

/**
 *_memcpy - function
 *@dest: value
 *@src: value
 *@n: value
 *Return: always
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
