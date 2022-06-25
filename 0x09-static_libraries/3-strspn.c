#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 *
 * @s: input
 * @accept: accepted bytes.
 *
 * Return: number of bytes in the initial segment of s
 * which only consist of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, b;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		b = 1;
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				b = 0;
				break;
			}
		}
		if (b == 1)
			break;
	}
	return (x);
}

