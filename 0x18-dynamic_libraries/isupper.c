#include "main.h"
/**
 *  * _isupper - function that shows 1
 *   * for uppercase and 0 for otherwise
 *    *
 *     *@c: input char
 *      *
 *       *Return: return 1 for uppercase
 *        *
 *        */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
			return (1);
	else
			return (0);
}
