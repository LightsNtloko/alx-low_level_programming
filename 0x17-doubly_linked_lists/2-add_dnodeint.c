#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - The function that adds a new node in the beginning of a
 * dlistint_t list
 * @head: The double pointer to the head of the list
 * @n: The integer to be added to the new node
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
