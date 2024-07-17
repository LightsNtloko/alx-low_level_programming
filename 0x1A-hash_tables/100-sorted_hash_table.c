#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_delete - The function deletes a hash table.
 * @ht: The sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int k;
	shash_node_t *node, *temp;

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

/**
 * shash_table_print_rev - The function prints a sorted hash table in reverse
 * order.
 * @ht: The sorted hash table/
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		if (!first)
		{
			printf(", ");
		}
		printf("'%s': '%s'", node->key, node->value);
		first = 0;
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_create - The function creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if something went
 * wrong.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;
	unsigned long int k;

	shash_table = malloc(sizeof(shash_table_t));
	if (shash_table == NULL)
	{
		return (NULL);
	}

	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}

	for (k = 0; k < size; k++)
	{
		shash_table->array[k] = NULL;
	}

	shash_table->size = size;
	shash_table->shead = NULL;
	shash_table->stail = NULL;

	return (shash_table);
}

/**
 * update_value - The function updates the value of an existing key.
 * @node: The hash node with the existing key.
 * @value: The new value to set.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int update_value(shash_node_t *node, const char *value)
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
shash_node_t *create_new_node(const char *key, const char *value)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

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
	new_node->sprev = NULL;
	new_node->snext = NULL;
	return (new_node);
}

/**
 * insert_into_sorted_list - The function that inserts a node into the sorted
 * list.
 * @ht: The sorted hash table.
 * @new_node: The new node to insert.
 */
void insert_into_sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *node;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		node = ht->shead;
		while (node != NULL && strcmp(new_node->key, node->key) > 0)
		{
			node = node->snext;
		}
		if (node == NULL)
		{
			new_node->sprev = ht->stail;
			ht->stail->snext = new_node;
			ht->stail = new_node;
		}
		else
		{
			new_node->snext = node;
			new_node->sprev = node->sprev;
			if (node->sprev != NULL)
			{
				node->sprev->snext = new_node;
			}
			else
			{
				ht->shead = new_node;
			}
			node->sprev = new_node;
		}
	}
}

/**
 * shash_table_set - The function adds an element to the hash table.
 * @ht: The sorted hash table to add or update the key/value to.
 * @key: The key string. Key cannot be an empty string.
 * @value: The value associated with the key. Value must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	shash_node_t *head, *new_node;

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
	insert_into_sorted_list(ht, new_node);

	return (1);
}

/**
 * shash_table_get - The function that retrieves a value associated with a key
 * @ht: The hash table you want to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with  the element, or NULL if the key could not
 * be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

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

/**
 * shash_table_print - The project that prints a hash table.
 * @ht: The hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (!first)
		{
			printf(", ");
		}
		printf("'%s': '%s'", node->key, node->value);
		first = 0;
		node = node->snext;
	}
	printf("}\n");
}
