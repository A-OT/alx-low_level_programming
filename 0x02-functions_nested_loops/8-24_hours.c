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
	int h1 = (h / 10);
	int h2 = (h % 10);
	int m1 = (m / 10);
	int m2 = (m % 10);

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 64; m++)
		{
			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar('\n');
		}
	}
}
