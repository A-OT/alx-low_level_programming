#include "main.h"

/**
 * _strlen - function to print lenght of a string.
 *
 * @s: input used.
 *
 * Return - 0 (success).
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
