#include "lists.h"

/**
 * delete_nodeint_at_index - The function deletes the node at the index
 * of a listint_t list.
 * @head: The double pointer of the list
 * @index: The index of the node that should be removed, starting at 0.
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *current;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (k = 0; current != NULL && k < index - 1; k++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
