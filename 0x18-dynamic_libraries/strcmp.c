#include "main.h"
/**
 *  * _strcmp - function that compares two strings
 *   *
 *    * @s1: array 1
 *     * @s2: array 2
 *      * Return: the result
 *       */
int _strcmp(char *s1, char *s2)
{
		int i = 0;
			int com = 0;

				while (s1[i] != '\0' && s2[i] != '\0')
						{
									if (s1[i] != s2[i])
												{
															com = (s1[i] - 48) - (s2[i] - 48);
																	return (com);
																			}
											i++;
												}
					return (0);
}
