#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * update_value - The function updates the value of an existing key.
 * @node: The hash node with the existing key.
 * @value: The new value to set.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int update_value(hash_node_t *node, const char *value)
{
	char *new_value = strdup(value);
	if (new_value == NULL)
	{
		return (0);
	}
	free(node->value);
	node->value = new_value;
	return (1);
}

/**
 * create_new_node - The function create a new hash node.
 * @key: The key string. The key cannot be an empty string.
 * @value: The value associated with the key. The value must be duplicated
 *
 * Return: A pointer to the new node, or NULL if it failed.
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - The function adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key string. Key cannot be an empty string.
 * @value: The value associated with the key. Value must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *head, *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (update_value(head, value));
		}
		head = head->next;
	}

	new_node = create_new_node(key, value);
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
