#include <stdio.h>
#include "lists.h"
/**
 * size_t list_len - afunction that listlenght of the elements
 * @h: pointer to the list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
	h = h->next;
	n++;
	}
	return (n);
}
