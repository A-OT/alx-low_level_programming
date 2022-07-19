#include "lists.h"

/**
 * add_nodeint - Adds new at the beginning of a list.
 *
 * @n: The integer for the new node to contain.
 * @head: Pointer to the address of the head of the list.
 *
 * Return: Address of the new element. NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	if (head != NULL)
	{
		new_list = malloc(sizeof(listint_t));
		if (new_list == NULL)
			return (NULL);

		new_list->n = n;
		new_list->next = *head;
		*head = new_list;

		return (new_list);
	}

	return (NULL);
}
