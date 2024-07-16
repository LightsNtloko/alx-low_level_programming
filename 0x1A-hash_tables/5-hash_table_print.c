#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - The project that prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int k;
	hash_node_t *node;
	int first = 1;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		node = ht->array[k];
		while (node != NULL)
		{
			if (!first)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
