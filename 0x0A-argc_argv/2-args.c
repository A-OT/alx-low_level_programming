#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints out all arguments it receives.
 *
 * @argc: count of arguments.
 * @argv: argument vector.
 *
 * Return: 0 (success).
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);

		i++;
	}

	return (0);
}
