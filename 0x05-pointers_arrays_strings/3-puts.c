#include "main.h"

/**
 * _puts - function that prints a string
 *
 * @str: input
 *
 * Return: string.
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_puthcar('\n');
}
