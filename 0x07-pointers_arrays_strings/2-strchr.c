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

	for (i = 0;  s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}

