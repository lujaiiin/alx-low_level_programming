#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: value
 * @index: value
 * Return: always
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (i != index || head == NULL)
	{
		return (NULL);
	}

	return (head);
}
