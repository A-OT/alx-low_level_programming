#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints out all arguments passed to it.
 *
 * @argc: number of count.
 * @argv: argument vector.
 *
 * Return: 0 (success).
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
