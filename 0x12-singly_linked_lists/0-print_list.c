#include "lists.h"

/**
 * print_list - The function prints all the elements of a list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	if (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}

		if (h->next)
		{
			return (1 + print_list(h->next));
		}
		return (1);
	}

	return (0);
}
