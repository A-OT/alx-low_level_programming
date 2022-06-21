#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard.
 *
 * @a: The board to print.
 *
 * Return:  0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = j = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}

}
