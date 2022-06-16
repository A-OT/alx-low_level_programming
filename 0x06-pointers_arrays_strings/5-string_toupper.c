#include "main.h"

/**
 * string_toupper - Fnction that changes all lowercase letters of a string
 * to uppercase.
 *
 * @b: input.
 *
 * Return: the pointer to dest.
 */

char *string_toupper(char *b)
{
	int i;

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] >= 'a' && b[i] <= 'z')
			b[i] -= 'a' - 'A';
		i++;
	}
	return (b);
}
