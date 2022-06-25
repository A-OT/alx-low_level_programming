#include "main.h"

/**
 * *_strncpy - Function that copies a string
 *
 * @dest: Destination string.
 * @src: Source string.
 * @n: input to be used.
 *
 * Return: Copied String.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
