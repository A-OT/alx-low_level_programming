#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of two diagonals of a square
 * matrix of integers.
 *
 * @a: input pointer.
 * @size: size of the matrix
 *
 * Return: no return.
 */

void print_diagsums(int *a, int size)
{
	int b, x1 = 0, x2 = 0;

	for (b = 0; b < size; b++)
	{
		x1 += a[(size + 1) * b];
		x2 += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", x1, x2);
}
