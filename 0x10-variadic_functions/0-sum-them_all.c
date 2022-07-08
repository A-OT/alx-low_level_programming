#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 *
 * @n: number of arguments.
 *
 * Return: Sum of the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = result = 0; i < n; i++)
	{
		result += va_arg(ap, int);
	}
	va_end(ap);
	return (result);
}
