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
	int len = 0, i;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
