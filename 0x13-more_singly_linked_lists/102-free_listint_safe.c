#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - The function frees a listint_t linked list, while
 * handling the loops.
 * @h: The double pointer to the head of the list
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *next;
	listint_t **visited = NULL;
	size_t count = 0, k;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	current = *h;
	while (current != NULL)
	{
		visited = realloc(visited, (count + 1) * sizeof(listint_t *));
		if (visited == NULL)
		{
			exit(98);
		}
		visited[count] = current;
		count++;
		next = current->next;
		free(current);
		for (k = 0; k < count; k++)
		{
			if (next == visited[k])
			{
				free(visited);
				*h = NULL;
				return (count);
			}
		}
		current = next;
	}
	free(visited);
	*h = NULL;
	return (count);
}
