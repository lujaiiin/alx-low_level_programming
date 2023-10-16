#include "main.h"
/**
 *  * _strspn - function that gets the length of a prefix substring
 *   *
 *    * @s: array
 *     * @accept: array
 *      *
 *       * Return: c
 *        */
unsigned int _strspn(char *s, char *accept)
{
		int i = 0;
			int j = 0;
				unsigned int c = 0;

					while (s[i] != 32)
							{
										j = 0;
												while (accept[j])
															{
																			if (s[i] == accept[j])
																								c++;
																						j++;
																								}
														i++;
															}
						return (c);
}
