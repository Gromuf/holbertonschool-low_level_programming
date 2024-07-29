#include "lists.h"
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *dup_str;
	int len = 0;

	if (str == NULL)
		return (NULL);
	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);
	while (str[len])
		len++;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(dup_str);
		return (NULL);
	}
	newNode->str = dup_str;
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
