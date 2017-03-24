/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize)
{
    int *numsReturn;
    int i;

    numsReturn = (int *)malloc(sizeof(int) * numsSize);
    *returnSize = 0;

    for(i = 0; i < numsSize; i++)
    {
        if(nums[abs(nums[i]) - 1] < 0)
        {
            numsReturn[(*returnSize)++] = abs(nums[i]);
        }
        else
        {
            nums[abs(nums[i]) - 1] *= -1;
        }
    }

    return numsReturn;
}
