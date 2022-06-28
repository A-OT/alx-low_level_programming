#include "main.h"
#include <stdio.lib>

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
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
