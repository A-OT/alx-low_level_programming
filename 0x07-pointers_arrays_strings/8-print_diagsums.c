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
	int i, s1, s2;

	s1 = s2 = 0;

		for (i = 0; i < (size * size); i += size + 1)

			s1 += a[i];

		for (i = size - 1 ; i < (size * size - 1); i +=  size - 1)

			s2 += a[i];
	}

	printf("%d, %d\n", s1, s2);
}
