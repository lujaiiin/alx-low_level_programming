#include "lists.h"

/**
 * pop_listint - function
 * @head: value
 * Return: always
 */

int pop_listint(listint_t **head)
{
	listint_t *p;
	int i = 0;

	if (*head != NULL)
	{
		i = (*head)->n;
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	return (i);
}
