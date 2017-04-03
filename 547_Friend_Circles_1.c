void selectSameGroup(int **M, int *inGroup, int n, int i);

int findCircleNum(int** M, int MRowSize, int MColSize)
{
    int n = MRowSize;
    int nGroup = 0;
    int i;
    int *inGroup = (int *)calloc(n, sizeof(int));

    for(i = 0; i < n; i++)
    {
        if(inGroup[i] == 0)
        {
            nGroup++;
            inGroup[i] = 1;
            selectSameGroup(M, inGroup, n, i);
        }
    }

    return nGroup;
}

void selectSameGroup(int **M, int *inGroup, int n, int i){
    int j;

    for(j = 0; j < n; j++){
        if(M[i][j] == 1 && inGroup[j] == 0)
        {
            inGroup[j] = 1;
            selectSameGroup(M, inGroup, n, j);
        }
    }

    return;
}
