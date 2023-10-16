#include "main.h"

/**
 *  * _strlen - function return lenght
 *   *
 *    * @s: pointer
 *     * Return: lenght
 *      */

int _strlen(char *s)
{
		int i = 0;

			while (s[i] != 0)
						i++;
				return (i);
}
