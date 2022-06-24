#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that prints addition of positive number.
 *
 * @argc: number of arguments
 * @argv: argument vector.
 *
 * Return: if number contain symbol that in non-digit - 1 else - 0.
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");

				return (1);
			}
		}

		sum += atoi(argv[a]);
	}

	printf("%d\n", sum);

	return (0);
}
