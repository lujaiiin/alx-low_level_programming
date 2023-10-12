#include "lists.h"

/**
 * free_dlistint - function
 * @head: value
 * Return: always
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *okda;

	while (head)
	{
		okda = head;
		head = head->next;
		free(okda);
	}
}
