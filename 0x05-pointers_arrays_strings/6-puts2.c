#include "main.h"

/**
 * puts2 - fucntion printing every other character, starting with
 * the first character, followed by a new line.
 *
 * @*str: input.
 *
 * Return: 0 (success).
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
