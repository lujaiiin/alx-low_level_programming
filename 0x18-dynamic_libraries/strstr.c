#include "main.h"
/**
 *  * *_strstr -  function that locates a substring
 *   *
 *    * @haystack: array
 *     * @needle: array
 *      *
 *       * Return: s or NULL
 *        */
char *_strstr(char *haystack, char *needle)
{
		int i;

			if (*needle == 0)
						return (haystack);

				while (*haystack)
						{
									i = 0;
											while (haystack[i] == needle[i])
														{
																		if (needle[i + 1] == '\0')
																							return (haystack);
																					i++;
																							}
													haystack++;
														}
					return ('\0');
}
