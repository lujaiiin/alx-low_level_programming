#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @idx: value
 * @n: value
 * @head: value
 * Return: always
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr, *p, *ad;

	p = *head;
	while (i < idx && *head != NULL)
	{
		ptr = p;
		p = p->next;
		i++;
	}
	if (i == idx)
	{
		ad = malloc(sizeof(listint_t));
		if (ad == NULL)
		{
			return (NULL);
		}
		ad->n = n;
		ad->next = p;
		if (i == 0)
		{
			*head = ad;
		}
		else
			ptr->next = ad;
		return (ad);
	}
	return (0);
}
