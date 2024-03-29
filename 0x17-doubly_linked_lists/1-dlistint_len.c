#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a goubly linked list.
 *
 * @h: The double linked list to count.
 *
 * Return: Number of elements in the doubly linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
