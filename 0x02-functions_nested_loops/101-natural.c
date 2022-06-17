#include <stdio.h>

/**
 * main - function that prints the sum of multiples of 3 or 5
 * below 1024.
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int dub;

	for (n = 0; n < 1024; n++)
		if (n % 3 == 0 || n % 5 == 0)
			dub += n;
	printf("%d\n", dub);
	return (0);
