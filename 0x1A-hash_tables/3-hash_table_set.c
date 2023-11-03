#include "hash_tables.h"

/**
 * hash_table_set - function
 * @ht: value
 * @key: val 2
 * @value: val 3
 * Return: set table
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nnd;
	unsigned long int hashk, j = 0;

	if (!ht || !key || !value || !*key)
		return (0);
	hashk = key_index((const unsigned char *)key, ht->size);
	j = hashk;
	while (ht->array[j])
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = strdup(value);
			return (1);
		}
		j++;
	}
	nnd = malloc(sizeof(hash_node_t));
	if (!nnd)
		return (0);
	nnd->key = strdup(key);
	if (!nnd->key)
	{
		free(nnd);
		return (0);
	}
	nnd->value = strdup(value);
	if (!nnd->value)
	{
		free(nnd);
		return (0);
	}
	nnd->next = ht->array[hashk];
	ht->array[hashk] = nnd;
	return (1);
}
