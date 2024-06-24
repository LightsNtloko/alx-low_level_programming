#include "lists.h"
#include <stdlib.h>

/**
 * delete_first_node - Deletes the first node of a doubly linked list.
 * @head: The double pointer to the head of the list.
 *
 * Return: 1 if successful, -1 if it fails.
 */
int delete_first_node(dlistint_t **head)
{
	dlistint_t *current = *head;

	if (current == NULL)
	{
		return (-1);
	}

	*head = current->next;
	if (current->next != NULL)
	{
		current->next->prev = NULL;
	}
	free(current);

	return (1);
}

/**
 * delete_node - The function deletes a node at a given position
 * in a doubly linked list.
 * @node: The pointer to the node to delete.
 *
 * Return: 1 if successful, -1 if it fails.
 */
int delete_node(dlistint_t *node)
{
	if (node == NULL)
	{
		return (-1);
	}

	if (node->next != NULL)
	{
		node->next->prev = node->prev;
	}

	if (node->prev != NULL)
	{
		node->prev->next = node->next;
	}

	free(node);
	return (1);
}

/**
 * delete_dnodeint_at_index - The function deletes the node at a given
 * index in a dlistint_t linked list.
 * @head: The double pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if successful, -1 if it fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int k;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		return (delete_first_node(head));
	}

	current = *head;
	for (k = 0; current != NULL && k < index; k++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}

	return (delete_node(current));
}
