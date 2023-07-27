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
		if (str[0] >= 97 && str[i] <= 122)
		{
			str[0] -= 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		if (str[i - 1] == 32 ||
				str[i - 1] == '\n' ||
				str[i - 1] == 9 ||
				str[i - 1] == '.' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '"')
		{
			str[i] -= 32;
		}
		}
		i++;
	}

	return (str);
}
