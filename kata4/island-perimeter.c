#include <stdlib.h>
#include <stdio.h>
#include "island-perimeter.h"

/** islandPerimeter 
  * Receive a bidimensional array of 0's and 1's that represent
  * an island area, where 1 is land, and where 0 is water. 
  * Returns the perimeter of the island.
  * @param:
  *   grid: bidimensional array that represents the island.
  *   gridRowSize: rows in the island.
  *   gridColSize: columns in the island.
  * @return:
  *   int: perimeter of the island.
 */

int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
   int perimeter = 0;
   for(int i = 0; i < gridRowSize; i++)
   {
      for (int j = 0; j < gridColSize; j++)
      {
         if(grid[i][j] == 1)
         {
            if (((i - 1) < 0 ) || (grid[i-1][j] == 0))
            {
               perimeter++;
            }
            if (((j - 1) < 0 ) || (grid[i][j-1] == 0))
            {
               perimeter++;
            }
            if (((i + 1) >= gridRowSize ) || (grid[i+1][j] == 0))
            {
               perimeter++;
            }
            if (((j + 1) >= gridColSize ) || (grid[i][j+1] == 0))
            {
               perimeter++;
            }
         }   
      }
   }
   return perimeter; 
}

