#include "lists.h"
/**
 * free_listint - a function that frees a listint
 * @head: point to pointer
 *
 * Return: zero
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while ((temp = head) != NULL)
{
head = head->next;
free(temp);
}
}
