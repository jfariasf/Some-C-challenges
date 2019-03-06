#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - Will free
 * @grid: grid
 * @height: height
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
