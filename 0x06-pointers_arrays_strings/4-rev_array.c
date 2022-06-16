#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers
 *
 * @a: input.
 * @n: input.
 *
 * Return: 0 (success)
 */

void reverse_array(int *a, int n)
{
	int i, y;

	for (i = 0; i < n; i++)
	{
		n--;
		y = a[i];
		a[i] = a[n];
		a[n] = y;
	}
}

