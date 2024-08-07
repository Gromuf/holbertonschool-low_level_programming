#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the list_t list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t result = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		result++;
		h = h->next;
	}
	return (result);
}
