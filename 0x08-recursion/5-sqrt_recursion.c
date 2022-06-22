#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 *
 * @n: Input number.
 *
 * Return: 0 (success) else -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)

		return (-1);

	else

		return (squareroot(n, (n + 1) / 2));
}

/**
 * squareroot - checks if it's a perfect square.
 *
 * @n: input.
 * @i: input.
 *
 * Return: 0 (success).
 */

int squareroot(int n, int i)
{
	if (i < 1)

		return (-1);

	else if (i * i == n)

		return (i);

	else

		return (squareroot(n, i - 1));
}
