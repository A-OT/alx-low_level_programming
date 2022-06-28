#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees two dimensional grid previously created
 * by my "alloc_grid" function.
 *
 * @grid: input
 * @height: input.
 *
 * Return: 0 (Success).
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
