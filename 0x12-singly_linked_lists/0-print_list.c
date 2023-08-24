#include "lists.h"

/**
 * print_list - function
 * @h: value
 * Retunr: always
 */

size_t print_list(const list_t *h)
{
	unsigned int i;
	size_t l = 0;

	if (h->str == NULL)
	{
		printf("[%u] (nil)\n", h->len);
	}
	for (i = 0; i < h->len; i++)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		l++;
	}
	return (l);
}
