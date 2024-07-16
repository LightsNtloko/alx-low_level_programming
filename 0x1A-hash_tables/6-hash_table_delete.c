#include "hash_tables.h"

/**
 * hash_table_delete - The function deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int k;
	hash_node_t *node, *temp;

	if (ht == NULL)
	{
		return;
	}

	for (k = 0; k < ht->size; k++)
	{
		node = ht->array[k];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
