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

	while (s[i] != '\0')
	{
		s[i] = s[i] + 13;
		i++;
	}
	s[i] = '\0';

	return (s);
}
