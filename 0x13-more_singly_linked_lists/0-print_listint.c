#include "lists.h"

/**
 * print_listint - function
 * @h: value
 * Return: always
 */

size_t print_listint(const listint_t *h)
{
	long unsigned i = 0;

	printf("%d\n", h->n);
	i++;

	return (i);
}
