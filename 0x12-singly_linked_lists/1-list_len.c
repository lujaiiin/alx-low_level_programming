#include "lists.h"

/**
 * list_len - function
 * @h: value
 * Return: always
 */

size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}
