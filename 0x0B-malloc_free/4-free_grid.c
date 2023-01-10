#include <stdlib.h>
#include "main.h"
/**
 *free_grid - free the memory allocated for the grid
 *@grid: grid to free
 *@height: height of the grid
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
