#include "main.h"

/**
 * _abs - Writes a function that computes the absolute value of an integer
 *
 * @n: the integer to be converted.
 *
 * Return: 0 (success).
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

