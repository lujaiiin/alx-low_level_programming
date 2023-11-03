#include "hash_tables.h"

/**
 * shash_table_create - function
 * @size: val
 * Return: always
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hit;
	unsigned long int j = 0;

	hit = malloc(sizeof(shash_table_t));
	if (!hit)
		return (NULL);
	hit->size = size;
	hit->array = malloc(sizeof(shash_node_t *) * size);
	if (!hit->array)
		return (NULL);
	while (j < size)
	{
		hit->array[j] = NULL;
		j++;
	}
	hit->shead = NULL;
	hit->stail = NULL;
	return (hit);
}

/**
 * shash_table_set - function
 * @ht: val
 * @value: val
 *@key: val
 * Return: always
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *n, *t;
	char *va;
	unsigned long int i;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	va = strdup(value);
	if (!va)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	t = ht->shead;
	while (t)
	{
		if (strcmp(t->key, key) == 0)
		{
			free(t->value);
			t->value = va;
			return (1);
		}
		t = t->snext;
	}
	n = malloc(sizeof(shash_node_t));
	if (!n)
	{
		free(va);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(va);
		free(n);
		return (0);
	}
	n->value = va;
	n->next = ht->array[i];
	ht->array[i] = n;

	if (!ht->shead)
	{
		n->sprev = NULL;
		n->snext = NULL;
		ht->shead = n;
		ht->stail = n;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		n->sprev = NULL;
		n->snext = ht->shead;
		ht->shead->sprev = n;
		ht->shead = n;
	}
	else
	{
		t = ht->shead;
		while (t->snext && strcmp(t->snext->key, key) < 0)
			t = t->snext;
		n->sprev = t;
		n->snext = t->snext;
		if (!t->snext)
			ht->stail = n;
		else
			t->snext->sprev = n;
		t->snext = n;
	}
	return (1);
}

/**
 * shash_table_get - function
 * @ht: val
 * @key: val
 * Return: always
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *n;
	unsigned long int i;

	if (!ht || !key || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	n = ht->shead;
	while (n && strcmp(n->key, key) != 0)
		n = n->snext;
	return ((!n) ? NULL : n->value);
}

/**
 * shash_table_print - function
 * @ht: val
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *n;

	if (!ht)
		return;
	n = ht->shead;
	putchar('{');
	while (n)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->snext;
		if (n)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('}');
	putchar('\n');
}

/**
 * shash_table_print_rev - function
 * @ht: val
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *n;

	if (!ht)
		return;
	n = ht->stail;
	putchar('{');
	while (n)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->sprev;
		if (n)
		{
			putchar(',');
			putchar(' ');
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - function
 * @ht: val
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *n, *t;

	if (!ht)
		return;
	n = ht->shead;
	while (n)
	{
		t = n->snext;
		free(n->key);
		free(n->value);
		free(n);
		n = t;
	}
	free(head->array);
	free(head);
}
