#include "hash_tables.h"

/**
 * hash_table_create - The function creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if something went
 * wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int k;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (k = 0; k < size; k++)
	{
		hash_table->array[k] = NULL;
	}

	hash_table->size = size;

	return (hash_table);
}
