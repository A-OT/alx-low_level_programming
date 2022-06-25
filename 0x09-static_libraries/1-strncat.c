#include "main.h"

/**
 * *_strncat - Function that concatenates two strings.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: Input to be used.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0, j = 0;

	while (dest[d])
	{
		d++;
	}

	while (j < n && src[j])
	{
		dest[d] = src[j];
		d++;
		j++;
	}

	dest[d + n + 1] = '\0';

	return (dest);
}
