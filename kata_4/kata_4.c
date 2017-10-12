#include <stdlib.h>
#include <stdio.h>
#include "kata_4.h"

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