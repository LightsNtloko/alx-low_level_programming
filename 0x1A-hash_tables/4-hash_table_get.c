#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - The function that retrieves a value associated with a key
 * @ht: The hash table you want to look into
 * @key: The key you are looking for
 *
 * Return: The value associated with  the element, or NULL if the key could not
 * be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}

	return (NULL);
}
