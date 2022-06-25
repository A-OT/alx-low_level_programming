#include "main.h"

/**
 * _islower - Checks and prints if it is a lowerchase chaacter.
 *
 * @c: the character to test.
 *
 * Return: 1 if c is lowercase, 0 if not true.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
