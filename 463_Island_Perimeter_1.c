int numberOfConnectedIslands(int ** grid, int gridRowSize, int gridColSize, int i, int j);

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
                stripes += (4 - numberOfConnectedIslands(grid, gridRowSize, gridColSize, i, j));
            }
        }
    }
    
    return stripes;
}

int numberOfConnectedIslands(int ** grid, int gridRowSize, int gridColSize, int i, int j)
{
    int up = (i - 1) < 0 ? 0 : grid[i - 1][j];
    int down = (i + 1) >= gridRowSize ? 0 : grid[i + 1][j];
    int left = (j - 1) < 0 ? 0 : grid[i][j - 1];
    int right = (j + 1) >= gridColSize ? 0 : grid[i][j + 1];
    
    return up + down + left + right;
}
