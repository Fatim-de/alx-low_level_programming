#include "main.h"
#include <string.h>
/**
 * is_palindrome - Main Entry
 * @s: input
 * Return: 0
 */
int is_palindrome(char *s)
{
	char *start = s;
	char *end = s + strlen(s) - 1;
	while (start < end)
{
	if (*start != *end)
{
	return (0);
}
	start++;
	end--;
}

return (1);
}
