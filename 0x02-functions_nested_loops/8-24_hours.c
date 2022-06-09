#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: 0 (success).
 */

void jack_bauer(void)
{
	int h, m;
	int x1 = (h / 10);
	int x2 = (h % 10);
	int z1 = (m / 10);
	int z2 = (m % 10);

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 64; m++)
		{
			_putchar(x1 + '0');
			_putchar(x2 + '0');
			_putchar(':');
			_putchar(z1 + '0');
			_putchar(z2 + '0');
			_putchar('\n');
		}
	}
}
