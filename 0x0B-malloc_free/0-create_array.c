#include"main.h"
#include <stdlib.h>
/**
 * create_array_creates an array of chars,
 * and initializes it with a specific char.
 * @size:size of the array
 * @c: character to insert
 * Return:return null if the size is zero or is fail
 * pointer to array
 *
 */
char *create_array(unsigned int size, char c)

{
	char *array;
	unsigned int i;
	if (size == 0)
{
	return (NULL);
}
array = malloc(size * sizeof(char));
if (array == NULL)
{
	return (NULL);
}
	for (i = 0; i < size; i++)
{
	array[i] = c;
}
return (array);
}



