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
			printf("[%d] %s", h->len, h->str);
		}
		result++;
		h->next;
	}
	return (result);
}
