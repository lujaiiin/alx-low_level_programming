#include "lists.h"

/**
 * print_list - function
 * @h: value
 * Return: always
 */

size_t print_list(const list_t *h)
{
	unsigned int i;
	size_t l = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			l++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			l++;
		}
	}
	return (l);
}
