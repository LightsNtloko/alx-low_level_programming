#include "lists.h"

/**
 * insert_nodeint_at_index - The function that inserts a new node at
 * a given index.
 * @head: The double pointer to the head of the list
 * @idx: The position of the list where the new node must be added, beginning
 * from 0
 * @n: The data set for the new node
 * Return: The address of the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *new_nodeint;
	listint_t *current = *head;

	if (head == NULL)
	{
		return (NULL);
	}

	new_nodeint = malloc(sizeof(listint_t));
	if (new_nodeint == NULL)
	{
		return (NULL);
	}

	new_nodeint->n = n;

	if (idx == 0)
	{
		new_nodeint->next = *head;
		*head = new_nodeint;
		return (new_nodeint);
	}

	for (k = 0; current != NULL && k < idx - 1; k++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_nodeint);
		return (NULL);
	}

	new_nodeint->next = current->next;
	current->next = new_nodeint;

	return (new_nodeint);
}
