#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function
 * @f: value
 * @name: value
 * Return: aleways
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
