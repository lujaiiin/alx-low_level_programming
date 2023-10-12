#include "lists.h"

/**
 * print_dlistint - function
 * @h: value
 * Return: always
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t j;

	for (j = 0; h != NULL; j++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (j);
}
