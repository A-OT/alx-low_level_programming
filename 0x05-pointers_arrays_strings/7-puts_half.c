#include "main.h"

/**
 * puts_half - function printing half od a string,
 * followed by a new line
 *
 * @*str: input.
 *
 * Return: 0 (success)
 */

void puts_half(char *str)
{
	int i, j;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
