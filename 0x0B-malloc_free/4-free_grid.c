#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: tow diamantion
 * @height: heighe of grid
 * Return: null
 */

void free_grid(int **grid, int height)
{
	int i;

if (grid == 0 || height == 0)
	return;


for (i = 0; i < height; i++)
	free(grid[i]);

free(grid);
}
