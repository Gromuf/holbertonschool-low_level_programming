#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t result = 0;

	while (h)
	{
		printf("%d\n",h->n);
		result++;
		h = h->next;
	}
	return (result);
}
