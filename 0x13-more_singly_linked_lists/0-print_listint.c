#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a linstint_t list
 * @h: A pointer to the head of the listint_t list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count_nodes;

	while (h == NULL)
	{
		return (0);
	}

	for (count_nodes = 0; h != NULL; count_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count_nodes);
}
