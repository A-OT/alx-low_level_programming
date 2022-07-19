#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list.
 *
 * @h: Pointer to the head of the listint_t list.
 *
 * Return: The number of elements in a linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
