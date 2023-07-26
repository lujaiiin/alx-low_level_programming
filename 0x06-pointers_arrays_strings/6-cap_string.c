#include "main.h"

/**
 *cap_string - function
 *@str: value
 *Return: always
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (str[i] <= 'a' && str[i] >= 'z')
			i++;
		if (str[i] == ' ' ||
				str[i] == '\n' ||
				str[i] == '\t' ||
				str[i] == 46 ||
				str[i] == ',' ||
				str[i] == ';' ||
				str[i] == '{' ||
				str[i] == '}' ||
				str[i] == '!' ||
				str[i] == '?' ||
				str[i] == '(' ||
				str[i] == ')' ||
				str[i] == '"')
		{
			str[i + 1] -= 32;
		}
		i++;
	}

	return (str);
}
