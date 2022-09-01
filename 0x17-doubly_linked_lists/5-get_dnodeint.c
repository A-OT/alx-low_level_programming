#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node from a doubly linked list.
 *
 * @head: Head of the list.
 * @index: Index of the nth node.
 *
 * Return: nth node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
