#include "main.h"

/**
 *swap - function swap value
 *
 *@a: value i well swap
 *
 *@b: secound value i well swap
 *
 *Return: No (Seccus)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
