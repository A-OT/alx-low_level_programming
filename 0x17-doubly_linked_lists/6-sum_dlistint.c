#include "lists.h"

/**
 * sum_dlistint - Sum of all data (n) in a doubly linked list.
 *
 * @head: The head of the doubly linked list.
 *
 * Return: The sum of all data.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
