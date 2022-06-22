#include "main.h"

/**
 * factorial - Factor that return the factorial of a given number.
 *
 * @n: Input.
 *
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)

		return (-1);

	else if (n == 0)

		return (1);

	else

		return (n * factorial(n - 1));
}
