#include "main.h"
/**
 *  * _atoi - function convert a string
 *   *
 *    * Return: numbers
 *     * @s: pointer
 *      */

int _atoi(char *s)
{
		unsigned int number = 0;
			int gn = 1;

				do {
							if (*s == '-')
											gn *= -1;
									else if (*s >= 48 && *s <= 57)
													number = (number * 10) + (*s - 48);
											else if (number > 0)
															break;
												} while (*s++);

					return (number * gn);
}
