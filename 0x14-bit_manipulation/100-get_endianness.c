#include "main.h"

/**
 * get_endianness - function
 * Return: always
 */

int get_endianness(void)
{
	char *s;
	unsigned int l;

	l = 1;
	s = (char *)&l;

	return (*s);
}
