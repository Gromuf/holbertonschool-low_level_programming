#include "lists.h"

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
