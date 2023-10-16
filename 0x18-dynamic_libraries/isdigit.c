#include "main.h"
/**
 *  * _isdigit - function that test the input
 *   * if it is a digital or not
 *    *
 *     *@c: input
 *      *Return: return 1 if c is digital or 0
 *       */
int _isdigit(int c)
{
		if (c >= 48 && c <= 57)
					return (1);
			else
						return (0);
}
