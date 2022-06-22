#include "main.h"

/**
 * is_prime_number - Function that returns 1 if the inteeger is a prime number,
 * otherwise return 0.
 *
 * @n: input.
 *
 * Return: 1 (success) else 0.
 */

int is_prime_number(int n)
{
	return (checker(2, n));
}

/**
 * checker - Function that checks for a prime number.
 *
 * @n: input.
 * @base: input.
 *
 * Return: 1 (success) else 0.
 */

int checker(int n, int base)
{
	if (base % n == 0 || base < 2)

		return (0);

	else if (n == base - 1)

		return (1);

	else if (base > n)

		return (checker(n + 1, base));

	return (1);
}
