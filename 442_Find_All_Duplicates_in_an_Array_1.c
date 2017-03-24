/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize)
{
    int *numsReturn;
    int i;

    numsReturn = (int *)calloc(numsSize, sizeof(int));
    *returnSize = 0;

    for(i = 0; i < numsSize; i++)
    {
        numsReturn[nums[i] - 1] += 1;
    }

    for(i = 0; i < numsSize; i++)
    {
        if(numsReturn[i] == 2)
        {
            numsReturn[(*returnSize)++] = i + 1;
        }
    }

    return numsReturn;
}
