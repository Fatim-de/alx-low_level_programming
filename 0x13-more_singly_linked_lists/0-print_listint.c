#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint
 * @h: pointer to the node.
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("%d\n", h->i);

h = h->next;
i++;

}

	return (i);
}
