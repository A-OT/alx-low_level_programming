#include "main.h"

/**
 * print_rev - function prints in reverse
 *
 * @s: input.
 *
 * Return: 0 (success).
 */

void print_rev(char *s)
{
	int y = 0, i;

	while (s[i++])
		y++;

	for (i = y - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
