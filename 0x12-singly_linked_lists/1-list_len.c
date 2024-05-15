#include "lists.h"

/**
 * list_len - A function return the number of elements in a linked list_t list.
 * @h: The pointer to the head of the list
 *
 * Return: The number of elements n the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
