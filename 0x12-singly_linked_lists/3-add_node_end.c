#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list
 * @head: Address of the first node of a list
 * @str: Address of the string to insert into the new node
 * Return: Address of the new node
 **/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *end;
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
new->next = NULL;
	if (*head == NULL)
	{
	(*head) = new;
	return (new);
	}
	end = *head;
	while (end->next != NULL)
	end = end->next;
	end->next = new;
	return (new);
	}
