#include "lists.h"

/**
 * sum_dlistint - The function that returns the sum of all the data set (n)
 * of a dlistint_t list
 * @head: The pointer to the head of the list
 *
 * Return: Sum of all the data (n) in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
