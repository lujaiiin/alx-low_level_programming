#include "lists.h"

/**
 * add_dnodeint - function
 * @head: value
 * @n: value2
 * Return: always
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ja = malloc(sizeof(dlistint_t));

	if (ja == NULL || head == NULL)
	{
		return (ja ? free(ja), NULL : NULL);
	}
	ja->prev = NULL;
	ja->n = n;
	if (*head)
	{
		ja->next = *head;
		(*head)->prev = ja;
		*head = ja;
	}
	else
	{
		*head = ja;
		ja->next = NULL;
	}
	return (ja);
}
