#include "lists.h"

/**
 * add_nodeint - function
 * @head: value
 * @n: value
 * Return: always
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));

	if (head == NULL || p == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
