#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *tempNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		tempNode = *head;

		while (tempNode->next != NULL)
			tempNode = tempNode->next;
		newNode->prev = tempNode;
		tempNode->next = newNode;
	}
	return (newNode);
}
