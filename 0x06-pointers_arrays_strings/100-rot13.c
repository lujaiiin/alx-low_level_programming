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
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
		{
			while (s[i] >= 77 && s[i] <= 90)
			{
				s[i] = s[i] - 13;
			}
			i++;
			while (s[i] < 77 && s[i] >= 65)
			{
				s[i] = s[i] + 13;
			}
			i++;
		}
	}
	s[i] = '\0';

	return (s);
}
