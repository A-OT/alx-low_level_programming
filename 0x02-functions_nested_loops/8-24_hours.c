#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 *
 * @i: the character to be used.
 *
 * Return: 0 (success).
 */

void jack_bauer(void i)
{
	if (i >= '00:00' && i <= '23:59')
	       i += 1;
		return (0);
}
