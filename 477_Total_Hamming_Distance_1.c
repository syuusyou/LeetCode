int totalHammingDistance(int* nums, int numsSize)
{
    int *zeroCount, *oneCount;
    int ret = 0, i, j, tmp;

    zeroCount = (int *)calloc(sizeof(int) * 8, sizeof(int));
    oneCount = (int *)calloc(sizeof(int) * 8, sizeof(int));

    for(i = 0; i < numsSize; i++)
    {
        for(j = 0; j < sizeof(int) * 8; j++)
        {
            tmp = 1 << j;
            if(nums[i] & tmp)
            {
                oneCount[j]++;
            }
            else
            {
                zeroCount[j]++;
            }
        }
    }

    for(j = 0; j < sizeof(int) * 8; j++)
    {
        ret += (oneCount[j] * zeroCount[j]);
    }

    return ret;
}
