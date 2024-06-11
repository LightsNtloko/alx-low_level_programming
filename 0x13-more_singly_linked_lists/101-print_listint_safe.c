#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - The function prints a listint_t linked list, while
 * handling loops.
 * @head: The pointer to the head of the list.
 * Return: The nunmber of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t **visited = NULL;
	size_t count = 0, k;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);

		visited = realloc(visited, (count + 1) * sizeof(listint_t *));
		if (visited == NULL)
		{
			exit(98);
		}

		visited[count] = current;
		count++;

		current = current->next;

		for (k = 0; k < count; k++)
		{
			if (current == visited[k])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				free(visited);
				return (count);
			}
		}
	}

	free(visited);
	return (count);
}
