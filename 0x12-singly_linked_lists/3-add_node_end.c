#include "lists.h"
/**
 * lenght - function
 * @l: value
 * Return: always
 */

int lenght(char *l)
{
	int i = 0;

	while (l[i])
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - function
 * @str: vlaue
 * @head: value
 * Return: always
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn;
	list_t *p;

	p = *head;
	newn = malloc(sizeof(list_t));

	if (newn == NULL || head == NULL)
	{
		return (NULL);
	}

	if (str != NULL)
	{
		newn->str = strdup(str);
		if (newn->str == NULL)
		{
			free(newn);
			return (NULL);
		}
		newn->len = lenght(newn->str);
	}
	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}

	while (p->next)
	{
		p = p->next;
	}
	p->next = newn;
	return (newn);
}
