#include "main.h"

/**
 *_strstr - function
 *@haystack: value
 *@needle: value
 *
 *Return: always
 */

char *_strstr(char *haystack, char *needle)
{
	int j, i;
	char h;

	for (i = 0 ; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				h = &haystack[i];
			}
			else 
				return (0);
		}
	}
	return (h);
}
