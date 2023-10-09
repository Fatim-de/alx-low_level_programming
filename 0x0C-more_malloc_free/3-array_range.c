#include "main.h"
#include <stdlib.h>

/**
 * array_range - Main Entry
 * @min: input
 * @max: input
 * Return: zero
 */
int *array_range(int min, int max)
{
	int i, x;
	int *a;

	if (min > max)
	return (NULL);
	x = max - min + 1;
	a = malloc(sizeof(int) * x);
	if (a == NULL)
	return (NULL);
	for (i = 0; i < x; i++, min++)
	{
	a[i] = min;
	}
	return (a);
}
