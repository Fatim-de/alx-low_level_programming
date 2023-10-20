#include <stdio.h>
#include "lists.h"
/**
 * add_node - afunction that adds a new node
 * @head: double pointer to the list
 * @str: string to add to the node
 * Return: address of new elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
	free(new);
	return (NULL);
	}
	new->next = (*head);
	(*head) = new;
	return (new);
}
