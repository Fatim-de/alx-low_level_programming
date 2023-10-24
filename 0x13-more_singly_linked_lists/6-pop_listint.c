#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 * @head: pointer to the list
 *
 * Return:  0 if list is empty
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *temp;

if (*head == NULL)
return (0);

temp = *head;
n = temp->n;
*head = (*head)->next;
free(temp);
return (n);
}
