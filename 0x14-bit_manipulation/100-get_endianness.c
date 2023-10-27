#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: zero if big else one.
 */
int get_endianness(void)
{
int num = 1;
char *endian = (char *)&num;

if (*endian == 1)
{
return (1);
}
else
return (0);
}
