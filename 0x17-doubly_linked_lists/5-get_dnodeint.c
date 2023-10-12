#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: value
 * @index: value2
 * Return: always
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; head; j++)
	{
		if (j == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
