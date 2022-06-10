#include "main.h"

/**
 * _isupper - checks code for uppercase letter
 *
 * @c: character used to check
 *
 * Return: 1 (success), 0 if not.
 */

int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

