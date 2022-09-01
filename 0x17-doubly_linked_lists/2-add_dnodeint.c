#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 *
 * @head: The head of the doubly linked list.
 * @n: The number to place in the new node.
 *
 * Return: The new head of the doubly linked list.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
