#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free function
 *
 * @grid: var2
 * @height: var1
 *
 * Return: void
 *
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i];
	free grid;
}
