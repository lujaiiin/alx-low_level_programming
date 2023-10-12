#include "lists.h"

/**
 * add_dnodeint_end - function
 * @head: value
 * @n: value2
 * Return: always
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ja = malloc(sizeof(dlistint_t));
	dlistint_t *ok;

	if (!ja || !head)
	{
		return (ja ? free(ja), NULL : NULL);
	}
	ja->n = n;
	ja->next = NULL;
	if (*head)
	{
		ok = *head;
		while (ok->next)
		{
			ok = ok->next;
		}
		ok->next = ja;
		ja->prev = ok;
	}
	else
	{
		ja->prev = NULL;
		*head = ja;
	}
	return (ja);
}
