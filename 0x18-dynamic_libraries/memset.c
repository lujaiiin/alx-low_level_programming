#include "main.h"
/**
 *  * *_memset - function fills the first n bytes of the memory
 *   *
 *    * @s: pointer
 *     * @b: constant byte
 *      * @n: num of ti
 *       *
 *        * Return: array
 *         */

char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

			for (i = 0; i < n; i++)
						s[i] = b;
				return (s);
}
