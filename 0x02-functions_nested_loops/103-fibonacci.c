#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms between
 * 1 - 4,000,000 in Fibonacci sequence, followed by a new line.
 *
 * Return: 0 (success).
 */

int main(void)
{
	long int n1, n2, fs, afs;

	n1 = 1;
	n2 = 2;
	fs = afs = 0;
	while (fs <= 4000000)
	{
		fs = n1 + n2;
		n1 = n2;
		n2 = fs;
		if ((n1 % 2) == 0)
		{
			afs += n1;
		}
	}
	printf("%ld\n", afs);
	return (0);
}
