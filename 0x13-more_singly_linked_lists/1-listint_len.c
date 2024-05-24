#include "lists.h"

/**
 * listint_len - The function that returns the number of elements
 * in a linked listint_t list.
 * @h: The pointer to the head of the listint_t list
 *
 * Return: The  umber of elements int the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
