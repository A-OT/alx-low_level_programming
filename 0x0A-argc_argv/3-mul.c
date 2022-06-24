#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that prints two numbers and prints the result.
 *
 * @argc: number of argument.
 * @argv: argument vector.
 *
 * Return: 0 (success).
 */

int main(int argc, char *argv[])
{
	int x1, x2;

	x1 = x2 = 0;

	if (argc == 3)
	{
		x1 = atoi(argv[1]);

		x2 = atoi(argv[2]);

		printf("%d\n", x1 * x2);

		return (0);
	}
	else

		printf("Error\n");

	return (1);
}
