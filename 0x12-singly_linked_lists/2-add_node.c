#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of  a list_t list.
 *
 * @head: head of the linked list.
 * @str: string to store in the list.
 *
 * Return: Address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
