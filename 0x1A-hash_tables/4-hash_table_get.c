#include "hash_tables.h"

/**
 * hash_table_get - function
 * @key: val
 * @ht: val 2
 * Return: always
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hashk;
	hash_node_t *nd;

	if (!ht || !key || *key == '\0')
		return (NULL);
	hashk = key_index((const unsigned char *)key, ht->size);
	if (hashk >= ht->size)
		return (NULL);
	if (!ht->array[hashk])
		return (NULL);
	for (nd = ht->array[hashk]; nd; nd = nd->next)
	{
		if (strcmp(nd->key, key) == 0)
		{
			return (strdup(nd->value));
		}
	}
	return (NULL);
}

