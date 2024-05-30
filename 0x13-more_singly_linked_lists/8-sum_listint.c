#include "lists.h"

/**
 * sum_listint - The function that returns the sum of all data set (n) of a
 * listint_t list.
 * @head: The pointer to the head of the list
 *
 * Return:
 * The sum of all the data set (n), or 0 if the data does not exist in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
