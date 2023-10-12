#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 * @index: value
 * @head: value
 * Return: always
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tem = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	while (index != 0)
	{
		if (tem == NULL)
		{
			return (-1);
		}
		tem = tem->next;
		index--;
	}
	if (tem == *head)
	{
		*head = tem->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		tem->prev->next = tem->next;
		if (tem->next != NULL)
			tem->next->prev = tem->prev;
	}
	free(tem);
	return (1);
}


