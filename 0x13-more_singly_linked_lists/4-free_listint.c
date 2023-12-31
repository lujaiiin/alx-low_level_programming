#include "lists.h"

/**
 * free_listint - function
 * @head: value
 * Return: always
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
