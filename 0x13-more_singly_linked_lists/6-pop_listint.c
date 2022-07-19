#include "lists.h"

/**
 * pop_listint - Deletes the head node a listint_t linked list,
 * and returns the head node's data (n).
 *
 * @head: the head of the linked list.
 *
 * Return: 0 if linked list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
