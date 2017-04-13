struct edge
{
    int id;
    int count;
    UT_hash_handle hh;
};

int leastBricks(int** wall, int wallRowSize, int *wallColSizes)
{
    int maxPassCount = 0;
    int i, j, sum;
    struct edge *edges = NULL, *e = NULL;

    for(i = 0; i < wallRowSize; i++)
    {
        for(j = 0, sum = 0; j < wallColSizes[i] - 1; j++)
        {
            sum += wall[i][j];
            HASH_FIND_INT(edges, &sum, e);
            if(e)
            {
                e->count++;
                if(e->count > maxPassCount)
                {
                    maxPassCount = e->count;
                }
            }
            else
            {
                e = (struct edge *)malloc(sizeof(struct edge) * 1);
                e->id = sum;
                e->count = 1;
                if(e->count > maxPassCount)
                {
                    maxPassCount = e->count;
                }
                HASH_ADD_INT(edges, id, e);
            }
        }
    }

    return wallRowSize - maxPassCount;
}
