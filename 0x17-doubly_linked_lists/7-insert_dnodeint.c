#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @h: value
 * @n: value
 * @idx: value
 * Return: always
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ja;
	dlistint_t *tem = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; idx != 1; idx--)
	{
		tem = tem->next;
		if (tem == NULL)
		{
			return (NULL);
		}
	}
	if (tem->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	ja = malloc(sizeof(dlistint_t));
	if (ja == NULL)
	{
		return (NULL);
	}

	ja->n = n;
	ja->prev = tem;
	ja->next = tem->next;
	tem->next->prev = ja;
	tem->next = ja;

	return (ja);
}
