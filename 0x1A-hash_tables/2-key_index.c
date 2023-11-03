#include "hash_tables.h"

/**
 * key_index - function
 * @key: value
 * @size: value
 * Return: the key val
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashk;

	hashk = (hash_djb2(key)) % size;
	return (hashk);
}
