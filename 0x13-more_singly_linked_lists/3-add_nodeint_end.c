#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - The function that adds a new node at the end of
 * a listint_t list
 * @head: The double pointer to the head of the list
 * @n: The integer variable to add the new node
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodeint, *last;

	new_nodeint = malloc(sizeof(listint_t));
	if (new_nodeint == NULL)
	{
		return (NULL);
	}

	new_nodeint->n = n;
	new_nodeint->next = NULL;

	if (*head == NULL)
	{
		*head = new_nodeint;
		return (new_nodeint);
	}

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_nodeint;

	return (new_nodeint);
}
