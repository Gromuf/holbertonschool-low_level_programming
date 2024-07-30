#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the list_t list
 * @str: String to be duplicated and added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	char *dup_str;
	int len = 0;
	list_t *tempNode;

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
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		tempNode = *head;

		while (tempNode != NULL)
			tempNode = tempNode->next;

		tempNode->next = newNode;
	}
	return (newNode);
}
