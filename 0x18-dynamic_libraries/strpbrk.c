#include <stddef.h>
#include "main.h"

/**
 *  * *_strpbrk - function that searches a string for any of a set of bytes
 *   *
 *    * @s: array
 *     * @accept: array
 *      *
 *       * Return: s or NULL
 *        */

char *_strpbrk(char *s, char *accept)
{
		int i = 0;
			int j = 0;
				char *p;

					while (s[i])
							{
										while (accept[j])
													{
																	if (s[i] == accept[j])
																					{
																										p = &s[i];
																														return (p);
																																	}
																				j++;
																						}
												i++;
														j = 0;
															}
						return (NULL);
}
