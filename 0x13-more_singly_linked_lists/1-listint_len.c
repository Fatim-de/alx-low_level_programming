#include <stdio.h>
#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in a linked
 * @h: pointer to the head
 * Return: integer
 */
size_t listint_len(const listint_t *h)

{
	size_t n = 0;

	while (h != NULL)
	{
	h = h->next;
	n++;
	}
	printf("\n");
	return (n);
}
