int findContentChildren(int* g, int gSize, int* s, int sSize)
{
    int min, minIdx, i, j, ret = 0;

    for(i = 0; i < gSize; i++)
    {
        min = INT_MAX;
        minIdx = -1;
        for(j = 0; j < sSize; j++)
        {
            if(s[j] >= g[i] && s[j] < min)
            {
                min = s[j];
                minIdx = j;
            }
        }

        if(minIdx != -1)
        {
            ret++;
            s[minIdx] = INT_MIN;
        }
    }

    return ret;
}
