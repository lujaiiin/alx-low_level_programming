#include "lists.h"

/**
 * sum_dlistint - function
 * @head: value
 * Return: always
 */

int sum_dlistint(dlistint_t *head)
{
	int all;

	all = 0;
	for (; head;)
	{
		all += head->n;
		head = head->next;
	}
	return (all);
}
