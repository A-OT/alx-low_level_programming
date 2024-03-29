#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 *
 * @h: The double linked list to print.
 *
 * Return: The number of nodes of the double linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}

	return (length);
}
