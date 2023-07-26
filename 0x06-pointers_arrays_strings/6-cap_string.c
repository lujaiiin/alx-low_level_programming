#include "main.h"

/**
 *cap_string - function
 *@str: value
 *Return: always
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == 46 )
		{
			str[i + 1] += 32;
		}
		i++;
	}
	str[i] = '\0';

	return (str);
}
