#include "main.h"

/**
 * _strpbrk - Function that searches a astring for sny of a set of bytes.
 *
 * @s: input.
 * @accept: accepted bytes.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
