#include "main.h"
/**
 *  * *_strncpy- function that copies a string
 *   *
 *    * @dest : array 1
 *     * @src : array 2
 *      * @n : integar number
 *       *
 *        * Return: copied string
 *         */
char *_strncpy(char *dest, char *src, int n)
{
		int j = 0;

			while (j < n && src[j] != '\0')
					{
								dest[j] = src[j];
										j++;
											}
				while (j < n)
						{
									dest[j] = '\0';
											j++;
												}
					return (dest);
}
