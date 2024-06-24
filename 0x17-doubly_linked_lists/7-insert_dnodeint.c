#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_beginning - The function inserts a new node at
 * the beginning.
 * @h: The pointer to the pointer to the head of the list.
 * @new_node: The new node tha must be inserted.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_beginning(dlistint_t **h, dlistint_t *new_node)
{
	new_node->next = *h;
	if (*h != NULL)
	{
		(*h)->prev = new_node;
	}
	*h = new_node;
	return (new_node);
}

/**
 * insert_dnodeint_at_middle_or_end - The function inserts a new node at
 * the middle or end.
 * @current: The pointer to the current node.
 * @new_node: The new node that must be inserted.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_middle_or_end(dlistint_t *current, dlistint_t
		*new_node)
{
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}

/**
 * insert_dnodeint_at_index - The function inserts a new node at
 * a given position.
 * @h: The pointer to the pointer to the head of the list.
 * @idx: The index of the list where the new node should be added, the index
 * starts at 0.
 * @n: The integer value to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int k;

	if (h == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		return (insert_dnodeint_at_beginning(h, new_node));
	}

	current = *h;
	for (k = 0; k < idx - 1 && current != NULL; k++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	return (insert_dnodeint_at_middle_or_end(current, new_node));
}
