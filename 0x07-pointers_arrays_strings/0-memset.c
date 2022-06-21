#include "main.h"

/**
 * *_memset - Function that fills n bytes of the memory area pointed to by s
 * with the constant byte b.
 *
 * @s: pointer to memory area s
 * @b: constant byte to fill
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
