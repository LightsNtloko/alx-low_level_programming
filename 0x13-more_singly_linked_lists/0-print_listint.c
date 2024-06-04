#include <unistd.h>
#include "lists.h"

/**
 * _putchar - The function that writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1,
 * on error -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - The function that prints a string to stdout
 * @str: The string to be printed
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
}

/**
 * print_number - The function that prints an integer to stdout
 * @k: The integer to be printed
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}

/**
 * print_listint - The function that print all the elements of a listint_t
 * liked list.
 * @h: The pointer to the head of the list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		print_number(h->n);
		_putchar('\n');
		h = h->next;
		count++;
	}

	return (count);
}
