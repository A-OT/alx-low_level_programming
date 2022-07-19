#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list.
 *
 * @head: The head of list.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}
