#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: value
 * @n: value
 * Return: always
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *ptr;

	ptr = *head;

	p = malloc(sizeof(listint_t));

	p->n = n;
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
		return (*head);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = p;

	return (ptr);
}
