#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * followed by a new line
 *
 * @n: the number to start counting from
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
