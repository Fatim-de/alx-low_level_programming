#include <stdio.h>
#include "lists.h"
/**
 * size_t print_list -a function that prints all the elements
 * @h: pointer to the list
 * Return: the number of nodes
 */
	size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
	if (!h->str)
	printf("[0](nil)\n");
	else
	printf("%s\n", h->str);
	h = h->next;
	n++;
}
return (n);
}
