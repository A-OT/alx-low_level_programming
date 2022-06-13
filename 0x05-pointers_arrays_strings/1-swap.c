#include "main.h"

/**
 * swap_int - function swapping the values of two integers.
 *
 * @a: first input
 * @b: second input
 *
 * Return - 0 (success).
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
