#include <stdlib.h>
#include "main.h"
/**
* free_grid - frees a two dimensional array previously allocated
* by our alloc_grid function
* @grid: grid to free
* @height: height of the grid
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height == 0)
return;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
