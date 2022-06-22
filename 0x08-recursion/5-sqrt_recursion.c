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

	return (_sqrt(n, 1));

}

/**
 * _sqrt - checks if it's a perfect square.
 *
 * @n: input.
 * @i: input.
 *
 * Return: 0 (success).
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)

		return (-1);

	if (sqrt == n)

		return (i);

	return (_sqrt(n, i + 1));
}
