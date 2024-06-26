#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - The function that adds a new node at the beginning of a
 * listint_t list.
 * @head: The double pointer t the head of the list
 * @n: The integer that must be added to the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
