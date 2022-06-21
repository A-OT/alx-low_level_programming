#include "main.h"

/**
 * _strchr - Function that locates a character in a string.
 *
 * @s: String input
 * @c: character input.
 *
 * Return: Pointer to the first occurence of the characterc in the string
 * s, or NULL if the caracter is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	while  (*s != '\0')
	{
		if (*s == c)
			return (s);

		else if (*(s + 1) == c)

			return (s + 1);

		s++;
	}

	return (s + 1);
}

