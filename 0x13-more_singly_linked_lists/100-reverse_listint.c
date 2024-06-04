#include "lists.h"

/**
 * reverse_listint - The function that reverses alistint_t linked list
 * @head: The double pointer to the head of the list
 * Return: The pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
