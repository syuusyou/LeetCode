/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** findRelativeRanks(int* nums, int numsSize, int* returnSize)
{
    int *pairs;
    char **ret;
    int i, j, tmp, max, maxIdx;

    *returnSize = numsSize;
    pairs = (int *)malloc(sizeof(int) * numsSize);
    ret = (char **)malloc(sizeof(char *) * numsSize);

    for(i = 0; i < numsSize; i++)
    {
        pairs[i] = i;
        ret[i] = (char *)malloc(sizeof(char) * 13);
    }

    for(i = 0; i < numsSize; i++)
    {
        for(j = i, max = INT_MIN; j < numsSize; j++)
        {
            if(max <= nums[j])
            {
                max = nums[j];
                maxIdx = j;
            }
        }

        tmp = nums[i];
        nums[i] = nums[maxIdx];
        nums[maxIdx] = tmp;

        tmp = pairs[i];
        pairs[i] = pairs[maxIdx];
        pairs[maxIdx] = tmp;

        if(i == 0)
        {
            sprintf(ret[pairs[i]], "Gold Medal");
        }
        else if(i == 1)
        {
            sprintf(ret[pairs[i]], "Silver Medal");
        }
        else if(i == 2)
        {
            sprintf(ret[pairs[i]], "Bronze Medal");
        }
        else
        {
            sprintf(ret[pairs[i]], "%d", i + 1);
        }
    }

    return ret;
}
