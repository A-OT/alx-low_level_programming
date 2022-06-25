#include "main.h"

/**
 * _strlen - function to print lenght of a string.
 *
 * @s: input used.
 *
 * Return: 0 (success).
 */

int _strlen(char *s)
{
	int sum = 0;

	while (*s++)
		sum++;

	return (sum);
}
