#include "hash_tables.h"

/**
 * hash_table_print - function
 * @ht: val 1
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j = 0;
        int p = 0;
	hash_node_t *nd;

	if (!ht)
		return;
	putchar('{');
	while (j < ht->size)
	{
		if (ht->array[j])
		{
			if (p == 1)
			{
				putchar(',');
				putchar(' ');
			}
			nd = ht->array[j];
			while (nd)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd)
				{
					putchar(',');
					putchar(' ');
				}
			}
			p = 1;
		}
		j++;
	}
	putchar('}');
	putchar('\n');
}
