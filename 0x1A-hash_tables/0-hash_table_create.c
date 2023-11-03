#include "hash_tables.h"

/**
 * hash_table_create - finction
 * @size: value
 * Return: null or table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = malloc(sizeof(hash_table_t));
	unsigned long int j = 0;

	if (!hash)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(hash_table_t *) * size);
	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}
	while (j < size)
	{
		hash->array[j] = NULL;
		j++;
	}
	return (hash);
}
