#include "lists.h"

/**
 * print_dlistint - The function prints all the elements of a dlistint list
 * @h: The pointer to the headof the list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
