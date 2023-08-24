#include "lists.h"

/**
 * lenght - function
 * @l: vslue
 * Return: always
 */
int lenght(char *l)
{
	int ad = 0;
	int i = 0;

	while (l[i] != '\0')
	{
		i++;
		ad++;
	}
	return (ad);
}

/**
 * add_node - function
 * @head: value
 * @str: value
 * Return: always
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newn;

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
	newn->next = *head;
	*head = newn;
	return (newn);
}
