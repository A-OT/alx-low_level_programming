#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 *
 * @head: The head of the linked list.
 * @index: The index of the node.
 *
 * Return: nth node. NULL, if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
