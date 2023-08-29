#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * @head: value
 * @index: value
 * Return: always
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *k;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);

	}
	ptr = *head;
	while (index > i)
	{
		k = ptr;
		ptr = ptr->next;
		i++;
	}
	if (i == index)
	{
		k->next = ptr->next;
		free(ptr);
		return (1);
	}
	return (-1);
}
