#include "main.h"

/**
 *_strlen - function prints all string
 *
 *@s: the string
 *
 *Return: No (succes)
 */

int _strlen(char *s)
{
	int ad;

	while (*s != '\0')
	{
		ad++;
		s++;
	}
	return (ad);
}
