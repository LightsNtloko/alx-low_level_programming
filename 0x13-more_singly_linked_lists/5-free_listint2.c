#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a listint_t list and sets the head to
 * NULL
 * @head: The pointer to the pointer of the head of a list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
