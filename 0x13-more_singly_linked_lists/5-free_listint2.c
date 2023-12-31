#include "lists.h"
/**
 * free_listint2 - a function that frees a listint
 * @head: head of list
 *
 * Return: zero
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;
while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
*head = NULL;
}
