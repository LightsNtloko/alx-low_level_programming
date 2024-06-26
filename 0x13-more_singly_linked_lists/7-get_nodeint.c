#include "lists.h"

/**
 * get_nodeint_at_index - The function that returns the nth node of a listint_t
 * list.
 * @head: The pointer to the head of the list
 * @index: The index of the node, beginning from 0.
 * Return: The pointer to the nth node at index, or NULL if the node
 * is not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}

		current = current->next;
		count++;
	}

	return (NULL); /* if the node is not found */
}
