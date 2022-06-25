#include "main.h"

/**
 * _puts - function that prints a string
 *
 * @s: input
 *
 * Return: string.
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
