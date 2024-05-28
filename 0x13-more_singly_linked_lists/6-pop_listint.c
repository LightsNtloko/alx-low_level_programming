#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - The function that deletes the head of a listint_t linked list
 * and returns the head node's data variable (n).
 * @head: The double pointer to the head of the list
 *
 * Return: The data variable (n) of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
