#include "lists.h"

/**
 * listint_len - function
 * @h: value
 * Return: always
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
