int islandPerimeter(int** grid, int gridRowSize, int gridColSize) 
{
    int stripes = 0;
    int i, j;
    
    for(i = 0; i < gridRowSize; i++)
    {
        for(j = 0; j < gridColSize; j++)
        {
            if(grid[i][j] == 1)
            {
                stripes += (4 -  (((i - 1) <  0           ? 0 : grid[i - 1][j])
                               +  ((i + 1) >= gridRowSize ? 0 : grid[i + 1][j])
                               +  ((j - 1) <  0           ? 0 : grid[i][j - 1])
                               +  ((j + 1) >= gridColSize ? 0 : grid[i][j + 1])));
            }
        }
    }

    return stripes;
}
