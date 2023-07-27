#include "main.h"
/**
 *leet - function
 *Description: string lll
 *@s: value
 *Return: always
 */
char *leet(char *s)
{
	int i, a;
	char l[] = {"aeotl"};
	char n[] = {"AEOTL"};
	char o[] = {"43071"};

	i = 0;

	while (s[i] != '\0')
	{
		for (a = 0; a < 5; a++)
		{
		if (s[i] == l[a] || s[i] == n[a])
		{
			s[i] = o[a];
		}
		}
		i++;
	}

	return (s);
}
