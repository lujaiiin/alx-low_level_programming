#include "hash_tables.h"

/**
 * hash_table_delete - function
 * @ht: val 1
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *a, *nd;
        hash_table_t *hta;
	unsigned long int j = 0;

	hta = ht;
	while (j < hta->size)
	{
		nd = hta->array[j];
		while (nd != NULL)
		{
			a = nd->next;
			free(nd->key);
			free(nd->value);
			free(nd);
			nd = a;
		}
		j++;
	}
	free(hta->array);
	free(hta);
}
