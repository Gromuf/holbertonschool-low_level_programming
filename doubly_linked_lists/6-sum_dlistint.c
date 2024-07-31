#include "lists.h"

/**
 * sum_dlistint - Sums all the data (n) of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: Sum of all the data (n) in the list. If the list is empty,
 * return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
