#include "lists.h"

/**
 * sum_listint - function
 * @head: value
 * Return: always
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
