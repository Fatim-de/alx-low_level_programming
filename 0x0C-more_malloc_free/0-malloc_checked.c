#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked- check the code
 * @b: number of bytes should be allocated
 * Return: 0
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
	exit(98);
	}
	return (p);
}
